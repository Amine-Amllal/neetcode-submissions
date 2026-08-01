class MinStack {
private:
    stack<int> st;
    stack<int> stmin;
    int min;
public:
    MinStack() {
        min = INT_MAX;
    }
    
    void push(int val) {
        if(val<min) min=val;
        st.push(val);
        stmin.push(min);
    }
    
    void pop() {
        st.pop();
        stmin.pop();

        if (stmin.empty())
            min = INT_MAX;
        else
            min = stmin.top();
    }
    
    int top() {
        return st.top();
    }
    
    int getMin() {
        return stmin.top();
    }
};
