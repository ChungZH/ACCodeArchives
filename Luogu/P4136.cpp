// [P4136 谁能赢呢？] https://www.luogu.org/problemnew/show/P4136
#include <iostream>

using namespace std;

int main()
{
    int n;
    while (scanf("%d", &n) && n)
    {
        if (n % 2 == 0)
        {
            cout << "Alice" << endl;
        } else {
            cout << "Bob" << endl;
        }
    }
    return 0;
}
