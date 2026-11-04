class Solution {
public:
    Solution(){
        ios_base::sync_with_stdio(false);
        cin.tie(0);
        cout.tie(0);
    }
    vector<vector<string>> groupAnagrams(vector<string>& strs) {
        map<string,vector<string>> mp;
        for(int i=0;i<size(strs);i++){
            string tmp = strs[i];
            sort(tmp.begin(), tmp.end());;
            mp[tmp].push_back(strs[i]);
        }
        vector<vector<string>> output;
        for(auto el : mp){
            output.push_back(el.second);
        }
        return output;
    }
};
