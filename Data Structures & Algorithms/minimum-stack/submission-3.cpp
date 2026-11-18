class MinStack {

public:

    stack<int> st;
    stack<int> minst;
    MinStack() {
        ios_base::sync_with_stdio(0);
        cin.tie(0);
    }
    
    void push(int val) {
        st.push(val);
        if(minst.empty()){
            minst.push(val);
        }else{
            minst.push(min(minst.top(),val));
        }
    }
    
    void pop() {
        st.pop();
        minst.pop();
    }
    
    int top() {
        return st.top();
    }
    
    int getMin() {
        return minst.top();
    }
};
