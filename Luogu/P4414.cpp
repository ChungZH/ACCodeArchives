// [P4414 [COCI2006-2007#2] ABC] https://www.luogu.org/problemnew/show/P4414
#include <iostream>
#include <algorithm>
      
using namespace std;

int a[3];
string s;

int main()
{
    for (int i = 0; i < 3; i++) 
    { 
        cin >> a[i];
    }
    sort(a, a+3);
    
    cin >> s;

    for (int i = 0; i < 3; i++)
    {
        if (s[i] == 'A')
        {
            cout << a[0] << ' ';
        } else if (s[i] == 'B') {
            cout << a[1] << ' ';
        } else if (s[i] == 'C') {
            cout << a[2] << ' ';
        }
    }    
    cout << endl;

    return 0;
}
