class Solution {
public:

    string encode(vector<string>& strs) {
        string res="";
        for(string s:strs){
            res = res + s + "/";
        }
        return res;
    }

    vector<string> decode(string s) {
        vector <string> res;
        string temp = "";
        for(int i=0; i<s.length(); i++){
            if(s[i] == '/'){
                res.push_back(temp);
                temp = "";
            }else{
                temp += s[i];
            }
        }
        return res;
    }
};
