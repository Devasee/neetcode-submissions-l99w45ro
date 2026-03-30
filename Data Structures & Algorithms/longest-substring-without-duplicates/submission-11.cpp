class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        map<char, int> m;

        int prev = 0;
        int length = 0, maxa = 0;

        for(int i=0; i<s.size(); i++)
        {
            if(m.find(s[i]) == m.end() || m[s[i]] == 0)
            {
                length++;
                m[s[i]]++;
            }

            else{
                while(s[prev] != s[i])
                {
                    m[s[prev]] --;
                    prev++;
                    length--;
                }

                prev++;
            }

            maxa = max(maxa, length);
        }

        return maxa;
    }
};
