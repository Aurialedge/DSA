#include <bits/stdc++.h>
using namespace std;

class Router {
private:
    int memoryLimit;
    queue<array<int,3>> packets; // FIFO queue: {source, destination, timestamp}
    unordered_set<string> seen; // to detect duplicates
    unordered_map<int, vector<int>> destMap; // destination -> timestamps
    
    // helper to encode a packet uniquely
    string encode(int s, int d, int t) {
        return to_string(s) + "#" + to_string(d) + "#" + to_string(t);
    }
    
public:
    Router(int memoryLimit) {
        this->memoryLimit = memoryLimit;
    }

    bool addPacket(int source, int destination, int timestamp) {
        string key = encode(source, destination, timestamp);
        if (seen.count(key)) return false; // duplicate

        // evict oldest if full
        if ((int)packets.size() >= memoryLimit) {
            auto old = packets.front();
            packets.pop();
            string oldKey = encode(old[0], old[1], old[2]);
            seen.erase(oldKey);

            // also remove from destMap (lazy removal, keep sorted property)
            // instead of deleting directly, we just mark by not including during getCount
            // (but here we'll do efficient erasure)
            auto &vec = destMap[old[1]];
            auto it = lower_bound(vec.begin(), vec.end(), old[2]);
            if (it != vec.end() && *it == old[2]) vec.erase(it);
        }

        // add new packet
        packets.push({source, destination, timestamp});
        seen.insert(key);
        destMap[destination].push_back(timestamp); // timestamps always increasing
        return true;
    }

    vector<int> forwardPacket() {
        if (packets.empty()) return {};
        auto pkt = packets.front(); 
        packets.pop();
        string key = encode(pkt[0], pkt[1], pkt[2]);
        seen.erase(key);

        // remove from destMap
        auto &vec = destMap[pkt[1]];
        auto it = lower_bound(vec.begin(), vec.end(), pkt[2]);
        if (it != vec.end() && *it == pkt[2]) vec.erase(it);

        return {pkt[0], pkt[1], pkt[2]};
    }

    int getCount(int destination, int startTime, int endTime) {
        if (!destMap.count(destination)) return 0;
        auto &vec = destMap[destination];
        int l = lower_bound(vec.begin(), vec.end(), startTime) - vec.begin();
        int r = upper_bound(vec.begin(), vec.end(), endTime) - vec.begin();
        return r - l;
    }
};
