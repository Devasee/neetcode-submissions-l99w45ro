class Solution {
public:
    bool hasDuplicate(vector<int>& nums) {
        map<int,int> m;

        for(int n : nums)
        {
            m[n] ++;
        }

        for(auto it = m.begin(); it != m.end(); it++)
        {
            if(it->second > 1)
            return true;
        }

        return false;
    }
};