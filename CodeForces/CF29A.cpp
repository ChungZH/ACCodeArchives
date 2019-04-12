// [CF29A Spit Problem] https://www.luogu.org/problemnew/show/CF29A
#include <iostream>
#include <algorithm>

using namespace std;

int main()
{
    int n;
    cin >> n;
    
    int a[n], b[n];
    
    for (int i = 0; i < n; i++)
    {
    	cin >> a[i] >> b[i];
    }
    
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
        	if (i == j) continue;
        	
        	if(a[i] + b[i] == a[j] && a[j] + b[j] == a[i])
            {
                cout << "YES" << endl;
                return 0;
            }
        }
    }
    
    cout << "NO" << endl;

    return 0;
}
