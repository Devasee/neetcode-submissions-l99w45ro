class Solution {
public:
    vector<int> maxSlidingWindow(vector<int>& nums, int k) {
        vector<int> v;

        for(int i=0; i<nums.size()-k + 1; i++)
        {
            v.push_back(*max_element(nums.begin() + i, nums.begin() + i+k));
        }

        return v;
    }
};
