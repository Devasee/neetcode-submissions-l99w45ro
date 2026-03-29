class Solution {
public:
    bool hasDuplicate(vector<int>& nums) {
        unordered_set<int> s;

        for(int n : nums)
        {
            if(s.count(n) == 0)
            s.insert(n);

            else
            return true;
        }

        return false;
    }
};