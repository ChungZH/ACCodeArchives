// [1588. 所有奇数长度子数组的和] https://leetcode-cn.com/problems/sum-of-all-odd-length-subarrays/
class Solution {
public:
    int sumOddLengthSubarrays(vector<int>& arr) {
        vector<int> b;
        for (int i = 0; i < arr.size(); i++)
            if (i == 0) b.push_back(arr[0]);
            else b.push_back(arr[i] + b[i-1]);

        int ans = 0;
        for (int len = 1; len <= arr.size(); len += 2) {
            for (int i = len - 1; i < arr.size(); i++) {
                if (i-len >= 0)
                    ans += b[i] - b[i-len];
                else
                    ans += b[i];
            }
        }
        return ans;
    }
};
