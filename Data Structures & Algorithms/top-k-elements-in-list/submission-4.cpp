class Solution {
public:
    vector<int> topKFrequent(vector<int>& nums, int k) {
        unordered_map<int, int> count;
        for (int num : nums) {
            count[num]++;
        }

        priority_queue<pair<int, int>> maxHeap;
        for (auto& entry : count) {
            maxHeap.push({entry.second, entry.first}); // Max heap stores {frequency, element}
        }

        vector<int> res;
        for (int i = 0; i < k; i++) {
            res.push_back(maxHeap.top().second);
            maxHeap.pop(); // Extract the top k frequent elements
        }
        return res;
    }

};