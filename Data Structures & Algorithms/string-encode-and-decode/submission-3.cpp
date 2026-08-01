class Solution {
public:

    string encode(vector<string>& strs) {
        string res = "";
        for(string s: strs){
            res = res + to_string(s.length()) + "#" + s;
        }
        return res;
    }

    vector<string> decode(string s) {
        vector <string> res;
        int len;
        string temp = "";
        for(int i=0; i<s.length(); i++){
            temp = temp + s[i];
            if(s[i]=='#'){
                len= stoi(temp);
                temp = "";
                for(int j=1; j<=len; j++){
                    temp = temp + s[i+j];
                }
                res.push_back(temp);
                temp = "";
                i = len + i;
            }
        }
        return res;
    }
};
