class Solution {
public:
    Solution(){
        ios_base::sync_with_stdio(0);
        cin.tie(0);
    }
    vector<int> dailyTemperatures(vector<int>& temps) {
        int n = temps.size();
        vector<int> ans(n,0);
        stack<pair<int,int>> st;

        for(int i=0;i<n;i++){
            if(st.empty()){
                st.push({temps[i],i});
            }else if(temps[i]<= st.top().first){
                st.push({temps[i],i});
            }else{
                while(!st.empty() && st.top().first<temps[i]){
                    ans[st.top().second] = i - st.top().second;
                    st.pop();
                }
                st.push({temps[i],i});
            }
        }
        return ans;
    }
};
