class Solution {
public:
    int longestConsecutive(vector<int>& nums) {
        unordered_map<int, int> umap;
        int longest_streak = 0;

        for (int i = 0; i < nums.size(); ++i) {
            if (umap[nums[i]] == 0) {
                int streak = umap[nums[i] - 1] + umap[nums[i] + 1] + 1;
                umap[nums[i]] = streak;
                if (umap[nums[i] + 1]) {
                    umap[nums[i] + umap[nums[i] + 1]] = streak;
                }
                if (umap[nums[i] - 1]) {
                    umap[nums[i] - umap[nums[i] - 1]] = streak;
                }
                if (streak > longest_streak) {
                    longest_streak = streak;
                }
            }
        }
        return longest_streak;
    }
};