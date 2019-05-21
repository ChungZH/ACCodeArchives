// [AT2285 Increment Decrement] https://www.luogu.org/problemnew/show/AT2285
#include <iostream>
#include <algorithm>

using namespace std;

int N;
int high, now;
char c;

int main()
{
    cin >> N;

    for (int i = 0; i < N; i++)
    {
        cin >> c;

        if (c == 'I')
        {
            now++;
        } else {
            now--;
        }

        if (now > high)
        {
            high = now;
        }
    }

    cout << high << endl;
    return 0;
}
