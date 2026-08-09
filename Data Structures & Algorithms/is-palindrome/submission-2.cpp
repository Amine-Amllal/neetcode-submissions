class Solution {
public:
    bool isPalindrome(string s) {
        int lp=0, rp=s.size()-1 ;
        for(char &c : s){
            c=tolower(c);
        }
        while(lp<=rp){
            while( !isalnum(s[lp]) && lp+1<=s.size() ) lp++;
            while( !isalnum(s[rp]) && rp-1>=-1 ) rp--;
            if(lp==rp) return true;
            if(s[lp]!=s[rp]) return false;
            lp++;
            rp--;
        }
        return true;
    }
};
