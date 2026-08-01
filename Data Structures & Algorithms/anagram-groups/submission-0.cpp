class Solution {
public:

    bool isAnagram(string s, string t) {
        vector <int> vs (26,0);
        vector <int> vt (26,0);
        int len = s.length();
        if  (s.length() != t.length()) return false;
        for ( int i=0 ; i<len ; i++){
            vs[s[i]-'a']++;
            vt[t[i]-'a']++;
        }
        return vs==vt;
    }

    vector<vector<string>> groupAnagrams(vector<string>& strs) {
        vector <vector <string>> res;
        while(strs.size()!=0){
            vector <string> group;
            group.push_back(*strs.begin());
            string target = *strs.begin();
            strs.erase(strs.begin());
            for ( int j=0 ; j<strs.size() ; j++){
                if ( isAnagram(target,strs[j])){
                    group.push_back(strs[j]);
                    strs.erase(strs.begin()+j);
                    j--;
                }
            }
            res.push_back(group);
        }
        return res;
    }
};