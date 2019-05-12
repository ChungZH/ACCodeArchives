// [CF45A Codecraft III] https://www.luogu.org/problemnew/show/CF45A
#include <iostream>
using namespace std;

const string months[12] {"January", "February", "March", "April", "May", "June", "July", "August", "September", "October", "November", "December"};

int main()
{
    string s;
    int k;

    getline(cin, s);
    cin >> k;

    for (int i = 0; i < 12; i++)
    {
        if (months[i] == s)
        {
            k += i;
        }
    }

    cout << months[k%12] << endl;

    return 0;
}
