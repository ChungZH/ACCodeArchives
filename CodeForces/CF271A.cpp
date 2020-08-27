// [CF271A Beautiful Year] https://www.luogu.org/problemnew/show/CF271A
#include <iostream>
#include <sstream>

using namespace std;

int year;

int main()
{
    cin >> year;

    while (++year) {
        int k = year / 1000;
        int h = year / 100 - k * 10;
        int t = year / 10 - k * 100 - h * 10;
        int g = year % 10;

        if (k != h && k != t && k != g && h != t && h != g && t != g) {
            cout << year << '\n';
            break;
        }
    }
    return 0;
}
