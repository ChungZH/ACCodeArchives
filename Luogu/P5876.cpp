// [P5876 abbreviate] https://www.luogu.com.cn/problem/P5876
#include <iostream>
using namespace std;

inline bool pd(string a, string b)
{
    // 判断 a 是否为 b 的前缀
    for (int i = 0; i < a.length(); i++) {
        if (a[i] != b[i]) {
            return false;
        }
    }
    return true;
}

int main()
{
    int n;
    cin >> n;

    string a[n];
    for (int i = 0; i < n; i++)
        cin >> a[i];

    for (int i = 0; i < n; i++) {
        string prefix = ""; // 单词 i 的前缀
        for (int j = 0; j < a[i].length(); j++) {
            bool iso = true; // 是否输出
            prefix += a[i][j];
            for (int k = 0; k < n; k++) {
                if (a[k].length() >= j + 1 && k != i) {
                    // 如果 prefix 是 a[k] 的前缀
                    // 则继续循环
                    // 否则输出
                    if (pd(prefix, a[k])) {
                        iso = false;
                        break;
                    }
                }
            }
            if (iso) {
                cout << prefix << endl;
                break;
            }
        }
    }
    return 0;
}