// [75. 颜色分类] https://leetcode-cn.com/problems/sort-colors/
class Solution {
public:
    void sortColors(vector<int>& nums) {
        int cur = 0;
        for (int i = 0; i < nums.size(); i++) {
            if (nums[i] == 0) {
                swap(nums[i], nums[cur++]);
            }
        }

        for (int i = cur; i < nums.size(); i++) {
            if (nums[i] == 1) {
                swap(nums[i], nums[cur++]);
            }
        }
    }
};
