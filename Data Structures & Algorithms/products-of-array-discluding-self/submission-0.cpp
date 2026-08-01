class Solution {
public:
    vector<int> productExceptSelf(vector<int>& nums) {
        vector <int> res;
        int temp=1;
        for(int i=0; i<nums.size(); i++){
            for (int j=0; j<nums.size(); j++){
                if(j==i) continue;
                temp *= nums[j];
            }
            res.push_back(temp);
            temp = 1;
        }
        return res;
    }
};