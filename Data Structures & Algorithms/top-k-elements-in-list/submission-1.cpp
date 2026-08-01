class Solution {
public:
    vector<int> topKFrequent(vector<int>& nums, int k) {
    map <int, int> res;
    
    for(int i=0; i<nums.size() ; i++){
        res[nums[i]]++;
    }

    // Convert map to a vector of pairs
    vector<pair<int, int>> vec(res.begin(), res.end());

    // Sort by values
    sort(vec.begin(), vec.end(), [](const auto &a, const auto &b) {
        return a.second < b.second; // Ascending order
    });    
    vector <int> temp1;
    for (int i=0 ; i!=k ; i++){;
        temp1.push_back(vec[vec.size()-i-1].first);
    }
    return temp1;
    }
};
