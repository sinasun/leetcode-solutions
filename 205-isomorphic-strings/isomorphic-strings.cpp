class Solution {
public:
    bool isIsomorphic(string s, string t) {
        if (s.length() != t.length()) {
            return false;
        }
        unordered_map<char, char> umap;

        for (int i = 0; i < s.length(); ++i) {
            if (umap.find(s[i]) == umap.end()) {
                umap[s[i]] = t[i];
            } else if (umap[s[i]] != t[i]) {
                return false;
            }
        }

        unordered_map<char, char> umap2;

        for (int i = 0; i < t.length(); ++i) {
            if (umap2.find(t[i]) == umap2.end()) {
                umap2[t[i]] = s[i];
            } else if (umap2[t[i]] != s[i]) {
                return false;
            }
        }
        return true;
    }
};