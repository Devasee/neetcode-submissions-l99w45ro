class Solution {
public:
    vector<vector<int>> threeSum(vector<int>& nums) {
        
        sort(nums.begin(), nums.end());
        vector<vector<int>> v;

        for(int i=0; i<nums.size(); i++)
        {
            int l=i+1, r = nums.size()-1;

            if(nums[i] > 0)
            break;

            if(nums[i] == nums[i-1] && i > 0)continue;

            while(l < r)
            {
                int total = nums[i] + nums[l] + nums[r];

                if(total > 0)
                r--;

                else if(total == 0)
                {
                    v.push_back({nums[i], nums[l], nums[r]});
                    l++;
                    r--;
                    
                    //helps to remove duplicate for example [2,0,0,2,2]
                    while(l < r && nums[l] == nums[l-1])
                    l++;
                }
                
                else
                l++;
            }   
        }

        return v;
    }
};
