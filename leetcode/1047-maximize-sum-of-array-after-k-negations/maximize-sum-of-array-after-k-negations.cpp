class Solution {
public:
    int largestSumAfterKNegations(vector<int>& nums, int k) {
        sort(nums.begin(), nums.end());
        int count = 0;
        for (int i = 0; i < k && i < nums.size(); i++) {
            if (nums[i] >= 0) {
                break;
            }
            count++;
            nums[i] = -nums[i];
        }

        sort(nums.begin(), nums.end());
        int remaining = k - count;
        if (remaining != 0) {
            if (remaining % 2 == 1) {
                nums[0] = -nums[0];
            }
        }

        int sum = 0;
        for (int i = 0; i < nums.size(); ++i) {
            sum += nums[i];
        }
        return sum;
    }
};