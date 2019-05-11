// [CF78A Haiku] https://www.luogu.org/problemnew/show/CF78A
#include <iostream>
#include <string>
using namespace std;

string a, b, c;
int alen, blen, clen;
int asum, bsum, csum;

inline bool isvowel(char c);

int main()
{
    getline(cin, a); getline(cin, b); getline(cin, c);
    
    alen = a.length(); blen = b.length(); clen = c.length();
    
    for (int i = 0; i < alen; i++)
    {
        asum += isvowel(a[i]);
    }
    
    for (int i = 0; i < blen; i++)
    {
        bsum += isvowel(b[i]);
    }
    
    for (int i = 0; i < clen; i++)
    {
        csum += isvowel(c[i]);
    }
    
    if (asum == 5 && bsum == 7 && csum == 5)
    {
        cout << "YES" << endl;
    } else {
        cout << "NO" << endl;
    }
    return 0;
}

inline bool isvowel(char c)
{
    if (c == 'a' || c == 'e' || c == 'i' || c == 'o' || c == 'u')
    {
        return 1;
    }
    
    return 0;
}
