class Solution {
public:
    int maxArea(vector<int>& height) {
        int lp=0, rp=height.size()-1, res=INT_MIN ;
        while(lp<rp){
            if( min(height[lp], height[rp])*(rp-lp) >res) res=min(height[lp], height[rp])*(rp-lp) ;
            if(height[lp]>height[rp]){
                rp--;
            }else{
                lp++;
            }
        }
        return res;
    }
};