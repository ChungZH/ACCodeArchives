// [AT2685 i18n] https://www.luogu.org/problemnew/show/AT2685
#include <iostream>
using namespace std;

int main()
{
	string s;
	cin >> s;
	
	cout << s[0] << s.length()-2 << s[s.length()-1] << endl;
	return 0;
}
