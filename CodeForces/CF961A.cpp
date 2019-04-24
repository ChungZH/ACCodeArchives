// [CF961A Tetris] https://www.luogu.org/problemnew/show/CF961A
#include <cstdio>

int a[1000000];

int main()
{
	int n, m, minn = 9999999;
	scanf("%d%d", &n, &m);
	
	for (int i = 0; i < m; i++)
	{
		int t;
		scanf("%d", &t);
		
		a[t]++;
		
	}
	
	for (int i = 1; i <= n; i++)
	{
		if (a[i] < minn) minn = a[i];
	}
	
	printf("%d", minn);
	
	return 0;
}
