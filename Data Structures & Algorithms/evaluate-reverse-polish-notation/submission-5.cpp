class Solution {
public:
    // int evalRPN(vector<string>& tokens) {
    //     stack<int> st;
        
    //     for(string s : tokens){
    //         if(s=="+"){
    //             int a = st.top(); st.pop();
    //             int b = st.top(); st.pop();
    //             st.push(a+b);
    //         }else if(s=="-"){
    //             int a = st.top(); st.pop();
    //             int b = st.top(); st.pop();
    //             st.push(b-a);
    //         }else if(s=="*"){
    //             int a = st.top(); st.pop();
    //             int b = st.top(); st.pop();
    //             st.push(a*b);
    //         }else if(s=="/"){
    //             int a = st.top(); st.pop();
    //             int b = st.top(); st.pop();
    //             st.push(b/a);
    //         }else{
    //             st.push(stoi(s));
    //         }
    //     }
    //     return st.top();
    // }
    int dfs(vector<string>& tokens){
        string token = tokens.back();
        tokens.pop_back();

        if(token!="+" && token!="-" && token!="*" && token!="/"){
            return stoi(token);
        }

        int right = dfs(tokens);
        int left = dfs(tokens);

        if(token=="+"){
            return left+right;
        }else if(token=="-"){
            return left - right;
        }else if(token=="*"){
            return left * right;
        }else{
            return left / right;
        }
    }
    int evalRPN(vector<string>& tokens) {
        return dfs(tokens);
    }
};
