class Solution {
public:
    vector<int> majorityElement(vector<int>& nums) {
        vector<int> ans;
        unordered_map<int, int> umap;
        int n = nums.size();
        int limit = n / 3;

        for (int i = 0; i < n; ++i) {
            umap[nums[i]]++;
            if (umap[nums[i]] > limit && umap[nums[i]] < (limit + 2)) {
                ans.push_back(nums[i]);
            }
        }
        return ans;
    }
};