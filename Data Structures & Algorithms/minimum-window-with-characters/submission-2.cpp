class Solution {
public:
    string minWindow(string s, string t) {
        if(t.size() > s.size())
        return "";

        vector<int> v(128, 0);

        for(char c : t)
        {
            v[c - 'A'] ++;
        }

        int j = 0;
        int startlen = 0, minLen = INT_MAX;
        int required = t.size();

        for(int i=0; i<s.size(); i++)
        {
            if(v[s[i] - 'A'] > 0)
            required --;

            v[s[i] - 'A'] --;

            while(required == 0)
            {
                if(i - j + 1 < minLen)
                {
                    minLen = i - j + 1;
                    startlen = j;
                }

                
                v[s[j] - 'A'] ++;

                if(v[s[j] - 'A'] > 0)
                required ++;

                j++;
            }
        }

        return minLen == INT_MAX ? "" : s.substr(startlen, minLen);
    }
};
