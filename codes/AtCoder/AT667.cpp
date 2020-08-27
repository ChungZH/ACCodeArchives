// [AT667 天下一人力比較] https://www.luogu.org/problemnew/show/AT667
#include <algorithm>
#include <iostream>
using namespace std;

string s[1000000];

int main()
{
    int temp = 0;
    while (cin >> s[temp++])
        sort(s, s + temp);
    cout << s[6] << endl;
    return 0;
}
