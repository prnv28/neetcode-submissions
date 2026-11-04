class Solution {
public:
    Solution(){
        ios_base::sync_with_stdio(false);
        cin.tie(0);
    }
    vector<int> productExceptSelf(vector<int>& nums) {
        vector<int> prefix(nums.size(),1);
        vector<int> suffix(nums.size(),1);
        vector<int> ans(nums.size());
        int n = nums.size();
        prefix[0] = nums[0];
        suffix[n-1] = nums[n-1];
        for(int i=1;i<n;i++){
            prefix[i] = prefix[i-1]*nums[i];
            suffix[n-i-1] = suffix[n-i]*nums[n-i-1];
        }
        for(int i=0;i<n;i++){
            if(i==0){
                ans[i] = suffix[i+1];
            }else if(i==n-1){
                ans[i] = prefix[i-1];
            }else{
                ans[i] = prefix[i-1] * suffix[i+1];
            }
        }
        return ans;
    }
};
