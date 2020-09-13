// [819. 最常见的单词] https://leetcode-cn.com/problems/most-common-word/
class Solution {
public:
    string mostCommonWord(string paragraph, vector<string>& banned)
    {
        map<string, int> banMap, wordMap;
        for (auto i : banned)
            banMap[i]++;

        string cur;
        string ans;
        int maxx = 0;

        paragraph += " ";

        for (int i = 0; i < paragraph.length(); i++) {
            if (isalnum(paragraph[i])) {
                cur += tolower(paragraph[i]);
                continue;
            }

            if (banMap[cur] || cur == "") {
                cur.clear();
                continue;
            }

            wordMap[cur]++;

            if (wordMap[cur] > maxx) {
                maxx = wordMap[cur];
                ans = cur;
            }

            cur.clear();
        }
        return ans;
    }
};
