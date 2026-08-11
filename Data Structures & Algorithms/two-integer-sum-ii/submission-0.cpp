class Solution {
public:
    vector<int> twoSum(vector<int>& numbers, int target) {
        int lp=0, rp=numbers.size()-1;
        while(1){
            if(numbers[lp]+numbers[rp]>target){
                rp--;
            }else if(numbers[lp]+numbers[rp]<target){
                lp++;
            }else{
                return {lp+1, rp+1};
            }
        }
        return {0};
    }
};
