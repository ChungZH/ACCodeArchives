// [292. Nim 游戏] https://leetcode-cn.com/problems/nim-game/
class Solution {
public:
    bool canWinNim(int n) {
        if (n % 4 == 0)
        {
            return false;
        }
        return true;
    }
};