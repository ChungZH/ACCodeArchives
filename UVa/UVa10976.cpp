// [UVA10976 分数拆分 Fractions Again?!] https://www.luogu.org/problem/UVA10976
#include <iostream>
#include <vector>
#include <cstring>
using namespace std;

int main()
{
    int k;
    while (~scanf("%d", &k))
    {
        vector<int> ansx, ansy;
        int cnt = 0;
        for (int i = k+1; i <= 2*k; i++)
        {
            if (i * k % (i - k) == 0)
            {
                ansx.push_back(i * k / (i - k));
                ansy.push_back(i);
                cnt++;
            }
        }
        cout << cnt << endl;
        for (int i = 0; i < cnt; i++)
        {
            printf("1/%d = 1/%d + 1/%d\n", k, ansx[i], ansy[i]);
        }
    }
    return 0;
}