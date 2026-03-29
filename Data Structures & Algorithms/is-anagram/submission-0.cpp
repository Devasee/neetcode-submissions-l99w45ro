class Solution {
public:
    bool isAnagram(string s, string t) {
        map<char, int> m1;
        map<char, int> m2;

        for(char c: s)
        {
            m1[c] ++;
        }

        for(char c: t)
        {
            m2[c] ++;
        }

        if(m1.size() != m2.size())
        return false;

        for(auto it = m1.begin() ; it != m1.end(); it++)
        {
            char ch = it->first;
            int n = it->second;

            if(m2[ch] != n)
            return false;
        }

        return true;
    }
};
