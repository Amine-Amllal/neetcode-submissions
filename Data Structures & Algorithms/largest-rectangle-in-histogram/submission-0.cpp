class Solution {
public:
    int largestRectangleArea(vector<int>& heights) {
        int ms=0;
        stack<pair<int,int>> sim;
        sim.push({heights[0],0});
        for(int i=1; i<heights.size(); i++){
            int index = i;
            while(!sim.empty() && sim.top().first>heights[i]){
                int surface = sim.top().first * ( i - sim.top().second );
                if( ms < surface) ms = surface;
                index = sim.top().second;
                sim.pop();
            }
            sim.push({heights[i], index});
        }
        while(!sim.empty()){
            int surface = (heights.size() - sim.top().second) * sim.top().first;
            if(ms<surface) ms=surface;
            sim.pop();
        }
        return ms;
    }
};
