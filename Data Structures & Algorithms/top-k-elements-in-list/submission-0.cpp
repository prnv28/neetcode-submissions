class Solution {
public:
    vector<int> topKFrequent(vector<int>& nums, int k) {
        unordered_map<int,int> mp;
        for(auto ele : nums){
            mp[ele]++;
        }

        priority_queue<pair<int,int>, vector<pair<int,int>>, less<pair<int,int>>> pq;

        for(auto ele : mp){
            pq.push({ele.second,ele.first});
        }
        vector<int> ans;
        while(k--){
            if(!pq.empty()){
                ans.push_back(pq.top().second);
                pq.pop();
            }else{
                return ans;
            }
        }
        return ans;
    }
};
