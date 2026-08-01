class Solution {
public:
    vector<int> productExceptSelf(vector<int>& nums) {
        int produit = 1, size= nums.size(), zero=0;
        for(int i=0;i<size; i++){
            if(nums[i]==0){
                zero++;
                continue;
            }
            produit*=nums[i];
        }
        if(zero>1){
            return vector <int>(size,0);
        }
        vector <int> res(size);
        for(int i=0; i<size; i++){
            if(zero==1){
                res[i] = nums[i]==0 ? produit : 0 ;
            }else{
                res[i]=(produit/nums[i]);
            }
        }
        return res;
    }
};