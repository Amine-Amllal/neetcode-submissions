class Solution {
public:
    vector<int> productExceptSelf(vector<int>& nums) {
        int size = nums.size();
        vector <int> left(size);
        left[0] = 1;
        for(int i=1; i<size; i++){
            left[i]= left[i-1]*nums[i-1];
        }
        vector <int> right(size);
        right[size-1] = 1;
        for(int i=size-2; i>=0; i--){
            right[i]= right[i+1]*nums[i+1];
        }
        vector <int> res(size);
        res[0] = right[0];
        res[size-1] = left[size-1];
        for (int i =1; i<size-1; i++){
            res[i] = left[i] * right[i];
        }
        return res;
    }
};