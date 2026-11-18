class MinStack {
private:
    vector<int> st;
public:
    MinStack() {
    }
    
    void push(int val) {
        this->st.push_back(val);
    }
    
    void pop() {
        if(this->st.size()>0){
            this->st.pop_back();
        }
    }
    
    int top() {
        if(this->st.size()>0){
            return this->st.back();
        }else{
            return -1;
        }
    }
    
    int getMin() {
        if(this->st.size()>0){
            return *min_element(this->st.begin(),this->st.end());
        }
    }
};
