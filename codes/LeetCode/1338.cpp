// [1338. 数组大小减半] https://leetcode-cn.com/problems/reduce-array-size-to-the-half/
class Solution {
public:
    int minSetSize(vector<int>& arr) {
        map<int, int> m;
        for (int i : arr)
            m[i]++;
        vector<int> temp;
        for (auto i : m)
            temp.push_back(i.second);
        sort(temp.begin(), temp.end(), greater<int>());
        int ans = 0;
        int ded = 0;
        for (int i : temp) {
            ans++;
            ded += i;
            if (ded * 2 >= arr.size()) break;
        }
        return ans;
    }
};
