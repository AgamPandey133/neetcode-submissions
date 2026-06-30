class Solution {
public:
    vector<int> topKFrequent(vector<int>& nums, int k) {
        int n = nums.size();

        unordered_map<int,int>mp;
        for(int &num: nums) mp[num]++;

        vector<vector<int>> freq(n+1);

        for(auto &m : mp) freq[m.second].push_back(m.first);

        vector<int> ans;
        for(int i = n; i > 0; i--){
            for(int f: freq[i]){
                ans.push_back(f);
                if(ans.size() == k) return ans;
            }
        }
        return ans;
    }
};
