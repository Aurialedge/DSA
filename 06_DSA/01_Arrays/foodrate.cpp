#include <bits/stdc++.h>
using namespace std;

class FoodRatings {
private:
    unordered_map<string, string> foodToCuisine;
    unordered_map<string, int> foodToRating;

    struct Compare {
        bool operator()(const pair<int, string>& a, const pair<int, string>& b) const {
            if (a.first != b.first) return a.first < b.first; // higher rating first
            return a.second > b.second; // lexicographically smaller first
        }
    };

    unordered_map<string, priority_queue<pair<int, string>, vector<pair<int, string>>, Compare>> cuisineToHeap;

public:
    FoodRatings(vector<string>& foods, vector<string>& cuisines, vector<int>& ratings) {
        for (int i = 0; i < foods.size(); i++) {
            foodToCuisine[foods[i]] = cuisines[i];
            foodToRating[foods[i]] = ratings[i];
            cuisineToHeap[cuisines[i]].push({ratings[i], foods[i]});
        }
    }

    void changeRating(string food, int newRating) {
        string cuisine = foodToCuisine[food];
        foodToRating[food] = newRating;
        cuisineToHeap[cuisine].push({newRating, food});
    }

    string highestRated(string cuisine) {
        auto& heap = cuisineToHeap[cuisine];
        while (!heap.empty()) {
            auto [rating, food] = heap.top();
            if (foodToRating[food] == rating) return food;
            heap.pop(); // lazy removal of outdated rating
        }
        return "";
    }
};
