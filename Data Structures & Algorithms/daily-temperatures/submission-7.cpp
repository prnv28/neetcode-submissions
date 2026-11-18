class Solution {
public:
    Solution(){
        ios_base::sync_with_stdio(0);
        cin.tie(0);
    }
    vector<int> dailyTemperatures(vector<int>& temps) {
        int n = temps.size();
        vector<int> ans(n,0);
        stack<int> st;

        for(int i=0;i<n;i++){
            while(!st.empty() && temps[i]>temps[st.top()]){
                ans[st.top()] = i - st.top();
                st.pop();
            }
            st.push(i);
        }
        return ans;
    }
};
