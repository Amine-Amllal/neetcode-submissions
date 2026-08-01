class Solution {
public:
    int longestConsecutive(vector<int>& nums) {
        if (nums.empty()) return 0;
        sort(nums.begin(), nums.end());
        nums.erase(unique(nums.begin(), nums.end()), nums.end());
        int max=0, seq=1;
        for(int i=0; i<(int)nums.size()-1; i++){
            if(nums[i]==nums[i+1]-1){
                seq++;
                continue;
            }
            if(seq>max){
                max=seq;
            }
            seq=1;
        }

        return max>seq? max: seq;
    }
};