// [AT2079 Signboard] AT2079 Signboard
#include <iostream>
using namespace std;
int main()
{
    string s, ys("CODEFESTIVAL2016");
    cin >> s;

    int ans = 0;
    for (int i = 0; i < 16; i++)
    {
        if (s[i] == ys[i]) ans++;
    }

    cout << 16-ans << endl;
    return 0;
}
