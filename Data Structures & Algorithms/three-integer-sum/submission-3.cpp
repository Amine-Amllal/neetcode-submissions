class Solution {
public:
    vector<vector<int>> threeSum(vector<int>& nums) {
        sort(nums.begin(), nums.end());
        pair<int, int> a = {0,nums[0]};
        vector<vector<int>>res;
        while(a.second<=0 && a.first+1<nums.size()){
            int i=a.first+1, j=nums.size()-1;
            while(i<j){
                if(nums[i]+nums[j]+a.second==0){
                    res.push_back({a.second,nums[i],nums[j]});
                    i++;
                    while(nums[i]==nums[i-1] && i<j) i++;
                    j--;
                    while(nums[j]==nums[j+1] && i<j) j--;
                }else if(nums[i]+nums[j]+a.second>0){
                    j--;
                    while(nums[j]==nums[j+1] && i<j) j--;
                }else if(nums[i]+nums[j]+a.second<0){
                    i++;
                    while(nums[i]==nums[i-1] && i<j) i++;
                }
            }
            a={a.first+1,nums[a.first+1]};
            while(a.second==nums[a.first-1] && a.first<= nums.size()-3){
                a.first++;
                a.second=nums[a.first];
            }
        }
        return res;
    }
};
