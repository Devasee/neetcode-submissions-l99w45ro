class Solution {
public:
    int longestConsecutive(vector<int>& nums) {
        if (nums.empty()) return 0;
        set<int> s(nums.begin(), nums.end());
        int count = 1, maxa = 1;

        if (!s.empty()) {
            auto prev = s.begin();              // first element
            auto it = next(s.begin());          // start from second element

            for (; it != s.end(); ++it) {
                if (*it - *prev == 1) {         // check consecutive
                    count++;
                } else {
                    count = 1;                  // reset if not consecutive
                }
                maxa = max(maxa, count);
                prev = it;                      // update previous
            }
        }

        return maxa;

    }
};
