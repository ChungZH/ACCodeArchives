// [CF918A Eleven] https://www.luogu.org/problemnew/show/CF918A
#include <iostream>
#include <algorithm>
using namespace std;
int main()
{
    int n;
    cin >> n;
    for (int i = 1; i <= n; i++) 
        if (i == 1 || i == 2 || i == 3 || i == 5 || i == 8 || i == 13 || i == 21 || i == 34 || 
            i == 55 || i == 89 || i == 144 || i == 233 || i == 377 || i == 610 || i == 987)
        {
            cout << 'O';
        } else {
            cout << 'o';
        }
    cout << endl;
    return 0;
}
