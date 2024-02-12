class Solution {
public:
    vector<vector<string>> groupAnagrams(vector<string>& strs) {
        vector<vector<string>> ans;
        vector<string> sorted_strs = strs;
        unordered_map<string, int> umap;
        int position = 0;
        for (int i = 0; i < sorted_strs.size(); ++i) {
            sort(sorted_strs[i].begin(), sorted_strs[i].end());
            if (umap[sorted_strs[i]]) {
                ans[umap[sorted_strs[i]] - 1].push_back(strs[i]);
            } else {
                position++;
                umap[sorted_strs[i]] = position;
                ans.push_back({strs[i]});
            }
        }
        return ans;
    }
};