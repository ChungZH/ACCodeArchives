// [AT1481 カキ] https://www.luogu.org/problemnew/show/AT1481
#include <iostream>
using namespace std;

int main()
{
    int cnt = 0;
    for (int i = 0; i < 12; i++) {
        string s;
        cin >> s;
        if (s.find("r") != -1) {
            cnt++;
        }
    }

    cout << cnt << endl;
    return 0;
}