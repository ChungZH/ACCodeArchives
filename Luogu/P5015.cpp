// [P5015 标题统计] https://www.luogu.org/problemnew/show/P5015
#include <iostream>
using namespace std;
int main()
{
    int sum = 0;
    string s;
    getline(cin, s);
    int strleng = s.length();
    for (int i = 0; i < strleng; i++)
    {
        if (s[i] != ' ') sum++;
    }
    cout << sum << endl;
    return 0;
}
