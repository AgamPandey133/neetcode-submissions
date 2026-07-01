class Solution {
public:
    vector<int> productExceptSelf(vector<int>& nums) {
        int n = nums.size();

        vector<int> pre(n, nums[0]);
        vector<int> suff(n, nums[n-1]);
        for(int i = 1; i < n; i++){
            pre[i] = pre[i-1]*nums[i];
        }
        for(int i = n-2; i >= 0; i--){
            suff[i] = suff[i+1]*nums[i];
        }

        vector<int> ans(n);
        ans[0] = suff[1];
        ans[n-1] = pre[n-2];
        for(int i = 1; i < n-1; i++){
            ans[i] = (suff[i+1]*pre[i-1]);
        }

        return ans;
    }
};
