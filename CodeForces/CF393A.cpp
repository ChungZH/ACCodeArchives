// [CF393A Nineteen] https://www.luogu.org/problemnew/show/CF393A
#include <bits/stdc++.h>

using namespace std;

int n, i, e, t;
int main()
{
    string s;
    cin >> s;
    
    int slen = s.length();
    
    for (int j = 0; j < slen; j++)
    {
        if (s[j] == 'n') n++;
        else if (s[j] == 'i') i++;
        else if (s[j] == 'e') e++;
        else if (s[j] == 't') t++;
    }
    
    cout << min(min(min((n-1)/2, i), e/3), t) << endl;
    return 0;
}
