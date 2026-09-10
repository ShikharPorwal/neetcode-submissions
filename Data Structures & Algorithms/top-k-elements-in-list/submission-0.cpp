class Solution {
public:
    vector<int> topKFrequent(vector<int>& nums, int k) {

        // Step 1: Frequency count
        unordered_map<int, int> freq;

        for (int num : nums) {
            freq[num]++;
        }

        // Step 2: Buckets
        // bucket[i] = elements having frequency i
        vector<vector<int>> bucket(nums.size() + 1);

        // Step 3: Put elements into their frequency bucket
        for (auto p : freq) {

            int element = p.first;
            int frequency = p.second;

            bucket[frequency].push_back(element);
        }

        // Step 4: Traverse from highest frequency
        vector<int> ans;

        for (int i = nums.size(); i >= 1; i--) {

            for (int num : bucket[i]) {

                ans.push_back(num);

                if (ans.size() == k) {
                    return ans;
                }
            }
        }

        return ans;
    }
};