class Solution {
public:
    vector<vector<string>> groupAnagrams(vector<string>& strs) {
        vector<vector<string>> v;

        map<string, vector<string>> m;

        for (string s : strs) {
            string key = s;
            sort(key.begin(), key.end());   // sorted string as key
            m[key].push_back(s);            // directly push into group
        }

        for (auto& it : m) {
            v.push_back(it.second);
        }

        return v;
    }
};
