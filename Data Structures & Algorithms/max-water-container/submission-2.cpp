class Solution {
public:
    int maxArea(vector<int>& heights) {
        int i = 0, j = heights.size() - 1;
        int maxa = 0;

        while(i<j)
        {
            int total = min(heights[i], heights[j]) * (j-i);

            maxa = max(maxa, total);

            if(heights[i] <= heights[j])
            {
                i++;
            }

            else{
                j--;
            }
        }

        return maxa;
    }
};
