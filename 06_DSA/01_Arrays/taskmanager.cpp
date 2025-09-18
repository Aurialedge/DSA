class TaskManager {
private:
    // taskId -> {userId, priority}
    unordered_map<int, pair<int, int>> taskMap;

    // max-heap: (priority, taskId, userId)
    priority_queue<tuple<int, int, int>> pq;

public:
    TaskManager(vector<vector<int>>& tasks) {
        for (auto &t : tasks) {
            int userId = t[0], taskId = t[1], priority = t[2];
            taskMap[taskId] = {userId, priority};
            pq.emplace(priority, taskId, userId);
        }
    }

    void add(int userId, int taskId, int priority) {
        taskMap[taskId] = {userId, priority};
        pq.emplace(priority, taskId, userId);
    }

    void edit(int taskId, int newPriority) {
        auto [userId, oldPriority] = taskMap[taskId];
        taskMap[taskId] = {userId, newPriority};
        pq.emplace(newPriority, taskId, userId);
    }

    void rmv(int taskId) {
        taskMap.erase(taskId);
    }

    int execTop() {
        while (!pq.empty()) {
            auto [priority, taskId, userId] = pq.top();
            pq.pop();
            // check if valid (exists & matches priority)
            if (taskMap.count(taskId) && taskMap[taskId].second == priority) {
                taskMap.erase(taskId);
                return userId;
            }
        }
        return -1;
    }
};
