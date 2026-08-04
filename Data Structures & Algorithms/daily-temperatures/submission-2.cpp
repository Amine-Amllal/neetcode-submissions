class Solution {
public:
    vector<int> dailyTemperatures(vector<int>& temperatures) {
        vector<int>res;
        for(int i=0; i<temperatures.size()-1; i++){
            int tempres=0;
            for(int j=i+1; j<temperatures.size(); j++){
                tempres++;
                if(temperatures[j]>temperatures[i]){
                    res.push_back(tempres);
                    break;
                }
                if(j==temperatures.size()-1 && temperatures[j]<=temperatures[i]){
                    res.push_back(0);
                }
            }
        }
        res.push_back(0);
        return res;
    }
};
