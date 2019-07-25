// [CF1030A In Search of an Easy Problem] https://www.luogu.org/problemnew/show/CF1030A
#include <iostream>
#include <algorithm>
using namespace std;

int main()
{
    int n;
    cin >> n;

    for (int i = 0; i < n; i++)
    {
        int c;
        cin >> c;
        if (c == 1)
        {
            cout << "HARD\n";
            return 0;
        }
    }
    cout << "EASY\n";
    return 0;
}