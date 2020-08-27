// [CF791A Bear and Big Brother] https://www.luogu.org/problemnew/show/CF791A
#include <algorithm>
#include <iostream>

using namespace std;

int main()
{
    int a, b, answer = 0;
    cin >> a >> b;

    while (a <= b) {
        a *= 3;
        b *= 2;
        answer++;
    }

    cout << answer << endl;

    return 0;
}
