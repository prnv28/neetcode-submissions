class Solution {
public:
    bool isValid(string s) {
     stack<int> st;
     unordered_set<char> alphab;
     alphab.insert('(');
     alphab.insert('{');
     alphab.insert('[');

     for(char ch: s){
        if(alphab.find(ch)!=alphab.end()){
            st.push(ch);
        }else{
            if(!st.empty()){
                if(ch=='}' && st.top()=='{'){
                    st.pop();
                }else if(ch==')' && st.top()=='('){
                    st.pop();
                }else if(ch==']' && st.top()=='['){
                    st.pop();
                }else{
                    return false;
                }
            }else{
                return false;
            }
            
        }
     }
     return st.empty();
    }
};
