// [USACO19DEC Where Am I?我在哪] https://www.luogu.com.cn/problem/P5832
#include <iostream>
using namespace std;

int main()
{
    int n;
    cin >> n;

    string s;
    cin >> s;

    int k = 1;
    bool isFound = 0;

    while (!isFound) {
        for (int i = 0; i <= n - k; i++) {
            string subs = s.substr(i, k);
            if (s.find(subs, i + 1) != string::npos)
                break;
            if (i == n - k)
                isFound = 1;
        }

        if (isFound)
            cout << k << endl;
        k++;
    }

    return 0;
}