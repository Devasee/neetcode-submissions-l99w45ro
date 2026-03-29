class Solution {
public:
    vector<int> productExceptSelf(vector<int>& nums) {
        vector<int> v1(nums.size(), 1), v2(nums.size(), 1);

        for(int i=1; i<nums.size(); i++)
        {
            v1[i] = (v1[i-1] * nums[i-1]);
        }

        for(int i = nums.size()-2; i >= 0; i-- )
        {
            v2[i] = (v2[i+1] * nums[i+1]);
        }

        vector<int> v;

        for(int i=0; i<nums.size(); i++)
        {
            v.push_back(v1[i] * v2[i]);
        }

        return v;
    }
};
