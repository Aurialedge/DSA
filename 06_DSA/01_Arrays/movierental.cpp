#include <bits/stdc++.h>
using namespace std;

class MovieRentingSystem {
    unordered_map<int, unordered_map<int, int>> price;  // shop -> movie -> price
    unordered_map<int, set<pair<int,int>>> unrented;   // movie -> {(price, shop)}
    set<tuple<int,int,int>> rented;                    // {(price, shop, movie)}

public:
    MovieRentingSystem(int n, vector<vector<int>>& entries) {
        for (auto &e : entries) {
            int shop = e[0], movie = e[1], p = e[2];
            price[shop][movie] = p;
            unrented[movie].insert({p, shop});
        }
    }

    vector<int> search(int movie) {
        vector<int> res;
        auto &s = unrented[movie];
        for (auto it = s.begin(); it != s.end() && res.size() < 5; ++it)
            res.push_back(it->second);
        return res;
    }

    void rent(int shop, int movie) {
        int p = price[shop][movie];
        unrented[movie].erase({p, shop});
        rented.insert({p, shop, movie});
    }

    void drop(int shop, int movie) {
        int p = price[shop][movie];
        rented.erase({p, shop, movie});
        unrented[movie].insert({p, shop});
    }

    vector<vector<int>> report() {
        vector<vector<int>> res;
        for (auto it = rented.begin(); it != rented.end() && res.size() < 5; ++it) {
            auto [p, shop, movie] = *it;
            res.push_back({shop, movie});
        }
        return res;
    }
};
