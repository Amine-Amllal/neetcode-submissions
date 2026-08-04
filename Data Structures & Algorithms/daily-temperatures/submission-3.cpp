class Solution {
public:
    vector<int> dailyTemperatures(vector<int>& temperatures) {
        int ts = temperatures.size();
        vector<int>res(ts,0);
        stack<pair<int,int>>temp;
        for(int i=0; i<ts; i++){
            while(!temp.empty() && temp.top().first<temperatures[i]){
                res[temp.top().second]=i-temp.top().second;
                temp.pop();
            }
            temp.push({temperatures[i],i});
        }
        return res;
    }
};
