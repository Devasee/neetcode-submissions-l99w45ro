class Solution {
public:
    vector<int> twoSum(vector<int>& numbers, int target) {
        for(int i=0; i<numbers.size(); i++)
        {
            int missing = target - numbers[i];

            for(int j=0; j<numbers.size(); j++)
            {
                if(numbers[j] == missing)
                return {i+1, j+1};
            } 
        }

        return {-1, -1};
    }
};
