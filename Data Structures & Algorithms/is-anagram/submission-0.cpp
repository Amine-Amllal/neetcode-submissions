class Solution {
public:
    bool isAnagram(string s, string t) {
        vector <int> vs (26,0);
        vector <int> vt (26.0);
        int len = s.length();
        if  (s.length() != t.length()) return false;
        for ( int i=0 ; i<len ; i++){
            vs[s[i]-'a']++;
            vt[t[i]-'a']++;
        }
        if(vs!=vt) return false;
        return true;
    }
};
