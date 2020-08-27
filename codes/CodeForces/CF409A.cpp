// [CF409A The Great Game] https://www.luogu.org/problemnew/show/CF409A
#include <iostream>
using namespace std;

int main()
{
    string a, b;
    cin >> a >> b;

    int t1 = 0, t2 = 0;
    for (int i = 0; i < a.length(); i += 2) {
        char tt = a[i];
        char ttt = b[i];

        if (tt == '8') {
            if (ttt == '(')
                t2++;
            else if (ttt == '[')
                t1++;
        } else if (tt == '(') {
            if (ttt == '8')
                t1++;
            else if (ttt == '[')
                t2++;
        } else {
            if (ttt == '8')
                t2++;
            else if (ttt == '(')
                t1++;
        }
    }

    if (t1 == t2)
        cout << "TIE\n";
    else
        cout << (t1 > t2 ? "TEAM 1 WINS\n" : "TEAM 2 WINS\n");

    return 0;
}