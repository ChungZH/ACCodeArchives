// [SP2 PRIME1 - Prime Generator] https://www.luogu.org/problemnew/show/SP2
#include <bits/stdc++.h>
using namespace std;
bool isprime(int a);
int main()
{
    int n;
    cin >> n;
    while (n--)
    {
        int a, b;
        cin >> a >> b;
        
        for (int i = a; i <= b; i++)
        {
            if (isprime(i))
            {
                cout << i << endl;
            }
        }
        cout << endl;
    }
    return 0;
}
bool isprime(int a)
{
    if (a == 2) return true;
    if (a == 1) return false;
    
    int t = sqrt(a);
    
    for (int i = 2; i <= t; i++)
    {
        if (a % i == 0) return false;
    }
    return true;
}
