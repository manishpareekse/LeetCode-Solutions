class Solution {
public:
    int threeSumClosest(vector<int>& nums, int target) {
        sort(nums.begin(), nums.end());
        int closest = nums[0] + nums[1] + nums[2];
        for (int i = 0; i < nums.size() - 1; i++) {
            int left = i + 1;
            int right = nums.size() - 1;

            while (right > left) {
                int sum = nums[i] + nums[left] + nums[right];

                if ((sum - target) * (sum - target) <
                    (closest - target) * (closest - target)) {
                    closest = sum;
                }

                if (sum == target) {
                    return sum;
                } else if (target > sum) {
                    left++;
                } else if (target < sum) {
                    right--;
                }
            }
        }
        return closest;
    }
};