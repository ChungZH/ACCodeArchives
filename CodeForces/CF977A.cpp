// [CF977A Wrong Subtraction] https://www.luogu.org/problemnew/show/CF977A
#include <iostream>
using namespace std;
int main()
{
	int n, k;
	
	cin >> n >> k;
	
	for (int i = 0; i < k; i++)
	{
		if (n % 10 != 0)
		{
			n--;
		} else {
			n /= 10;
		}
	}
	
	cout << n << endl;
	return 0;
}
