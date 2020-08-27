// [AT2201 鏡文 / Mirror String] https://www.luogu.org/problemnew/show/AT2201
#include <algorithm>
#include <iostream>
using namespace std;
int main()
{
    string s;
    cin >> s;

    string s1(s);
    reverse(s1.begin(), s1.end());

    const int slen = s1.length();

    for (int i = 0; i < slen; i++) {
        if (s1[i] == 'b')
            s1[i] = 'd';
        else if (s1[i] == 'd')
            s1[i] = 'b';
        else if (s1[i] == 'p')
            s1[i] = 'q';
        else if (s1[i] == 'q')
            s1[i] = 'p';
    }

    if (s == s1)
        cout << "Yes" << endl;
    else
        cout << "No" << endl;
    return 0;
}
