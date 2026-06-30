class Solution {
public:
    bool isAnagram(string s, string t) {
        int n1 = s.size();
        int n2 = t.size();

        if(n1 != n2) return 0;

        unordered_map<char,int>mp;

        for(int i = 0; i < n1; i++){
            mp[s[i]]++;
            mp[t[i]]--;

            if(mp[s[i]] == 0) mp.erase(s[i]);
            if(mp[t[i]] == 0) mp.erase(t[i]);
        }

        return mp.empty();
    }
};
