class Solution {
public:
    vector<int> countBits(int n) {
        vector<int> ans;
        for (int i = 0; i < n + 1; ++i) {
            int count = 0;
            int number = i;
            while (number > 0) {
                if (number % 2 == 1) {
                count++;
                }
                number = number / 2;
            }
            ans.push_back(count);
        }

        return ans;
    }
};