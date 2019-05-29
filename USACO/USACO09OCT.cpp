// [[USACO09OCT]谷仓里的回声Barn Echoes] https://www.luogu.org/problemnew/show/P2957
#include <bits/stdc++.h>
using namespace std;
int main()
{
    string a, b;
    cin >> a >> b;
    
    int aLen = a.length();
    for (int i = aLen - 1; i >= 0; i--)
    {
        for (int j = 0; j <= aLen - i; j++)
        {
            string temp = a.substr(j, i);
            if (b.find(temp) != -1) { cout << i << endl; return 0; }
        }
    }
    return 0;
}
