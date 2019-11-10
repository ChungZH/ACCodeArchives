// [P1603 斯诺登的密码] https://www.luogu.org/problem/P1603
#include <iostream>
#include <cstdio>
#include <algorithm>

using namespace std;

const string eng[20] = {"one", "two", "three", "four", "five", "six", "seven", "eight", "nine", "ten", "eleven", "twelve", "thirteen", "fourteen", "fifteen", "sixteen", "seventeen", "eighteen", "nineteen", "twenty" };
const int    num[20] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12, 13, 14, 15, 16, 17, 18, 19, 20};

int t[7], tn;

int main()
{
    string s;
    for (int i = 0; i < 6; i++)
    {
        cin >> s;

        if (s == "a" || s == "first" || s == "another")
        {
            t[tn++] = 1;
        } else if (s == "second" || s == "both") {
            t[tn++] = 2;
        } else if (s == "third") {
            t[tn++] = 3;
        } else {
            for (int j = 0; j < 20; j++)
            {
                if (s == eng[j])
                {
                    t[tn++] = (num[j] * num[j]) % 100;
                    break;
                }
            }
        }
    }

    sort(t, t+tn);

    bool flag = 1;
    for (int i = 0; i < tn; i++)
    {
        if (!flag)
        {
            printf("%.2d", t[i]);
        } else {
            printf("%d", t[i]);
            flag = 0;
        }
    }

    if (flag)
    {
        cout << 0 << endl;
    }
    return 0;
}