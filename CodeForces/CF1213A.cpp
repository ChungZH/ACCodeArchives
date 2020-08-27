// [CF1213A Chips Moving] https://www.luogu.com.cn/problem/CF1213A
#include <iostream>
#include <algorithm>
using namespace std;
int main()
{
    int n, a=0, b=0, x;
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        cin >> x;
        if (x % 2 == 0) a++;
        else b++;
    }

    cout << min(a, b) << endl;
    return 0;
}
