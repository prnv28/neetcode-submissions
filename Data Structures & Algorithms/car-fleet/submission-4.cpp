class Solution {
public:
    Solution(){
        ios_base::sync_with_stdio(false);
        cin.tie(0);
        cout.tie(0);
    }
    int carFleet(int target, vector<int>& position, vector<int>& speed) {
        vector<pair<int,pair<int,float>>> pos_speed;
        for(int i=0;i<position.size();i++){
            pos_speed.push_back({position[i],{speed[i],1.0*(target-position[i])/speed[i]}});
        }
        sort(pos_speed.begin(),pos_speed.end(),std::greater<>());
        int count = 0;
        float maxi = 1.0*INT_MIN;
        for(int i=0;i<pos_speed.size();i++){
            if(pos_speed[i].second.second>maxi){
                count++;
                maxi = max(maxi,pos_speed[i].second.second);
            }
        }
        return count;
    }
};
