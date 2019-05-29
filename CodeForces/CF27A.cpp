// [CF27A Next Test] https://codeforces.com/problemset/problem/27/A
#include <bits/stdc++.h>
using namespace std;
int bucket[3005];
int main()
{
	int n;
	cin >> n;
	
	for (int i = 0; i < n; i++)
	{
		int a;
		cin >> a;
		bucket[a]++;
	}
	
	for (int i = 1; ; i++)
	{
		if (bucket[i] == 0)
		{
			cout << i << endl;
			return 0;
		}
	}
	
	return 0;
}
