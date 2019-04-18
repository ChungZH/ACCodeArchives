// [CF705A Hulk] https://www.luogu.org/problemnew/show/CF705A
#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin >> n;
    
    bool flag = 0;
    
    cout << "I hate ";
    
    while (--n)
	{
		if (!flag)
		{
			cout << "that I love ";
		} else {
			cout << "that I hate ";
		}
		
		flag = 1-flag;
	}
	cout << "it\n";
    return 0;
}
