class Solution {
public:
    vector<vector<string>> groupAnagrams(vector<string>& strs) {
        int n = strs.size();

        vector<string> s = strs;

        for(auto &str : strs){
            sort(str.begin(), str.end());
        }

        unordered_map<string, vector<int>> mp;

        for(int i = 0; i < n; i++){
            mp[strs[i]].push_back(i);
        }

        vector<vector<string>> ans;
        for(auto &m : mp){
            vector<string> temp;
            for(auto &i : m.second){
                temp.push_back(s[i]);
            }

            ans.push_back(temp);
        }

        return ans;
    }
};
