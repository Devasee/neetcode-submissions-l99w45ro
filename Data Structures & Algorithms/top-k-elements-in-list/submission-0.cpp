class Solution {
public:
    vector<int> topKFrequent(vector<int>& nums, int k) {
        unordered_map<int, int> freq;

        // Step 1: Count frequency of each number
        for (int n : nums)
            freq[n]++;

        // Step 2: Move pairs (num, freq) into a vector
        vector<pair<int, int>> vec(freq.begin(), freq.end());

        // Step 3: Sort by frequency in descending order
        sort(vec.begin(), vec.end(), [](auto &a, auto &b) {
            return a.second > b.second;
        });

        // Step 4: Pick top k
        vector<int> res;
        for (int i = 0; i < k; i++)
            res.push_back(vec[i].first);

        return res;
    }
};
