class Solution {
public:
    int characterReplacement(string s, int k) {
        vector<int> v(26,0);

        int j = 0;
        int maxa = 0;
        int length = 0;

        for(int i=0; i<s.size(); i++)
        {
            v[s[i] - 'A'] ++;

            maxa = max(v[s[i] - 'A'], maxa);

            if((i - j + 1) - maxa  <= k)
            {
                length = max(length, i-j+1);
            }

            else{
                while((i - j + 1) - maxa  > k)
                {
                    v[s[j] - 'A'] --;
                    j++;
                }
            }
        }

        return length;
    }
};
