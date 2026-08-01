class Solution {
public:
    bool isValid(string s) {
        stack<int> st;
        if(s.size()%2==1) return false;
        for (char c : s){
            if(c=='(' || c=='{'|| c=='[' ){
                st.push(c);
            }else{
                if(st.empty()) return false;
                char temp;
                if(c==')'){
                    temp='(';
                }else if(c=='}'){
                    temp='{';
                }else if(c==']'){
                    temp='[';
                }
                if(temp != st.top()){
                    return false;
                }
                st.pop();
            }
        }
        return st.empty();
    }
};