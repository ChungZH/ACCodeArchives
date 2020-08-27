// [CF919B Perfect Number] https://www.luogu.org/problemnew/show/CF919B
#include <iostream>
using namespace std;

bool isPerfect(int n)
{
    int temp = 0;
    while (n > 0) {
        temp += n % 10;
        n /= 10;
    }
    if (temp == 10)
        return 1;
    return 0;
}

int main()
{
    int k, count = 0;
    cin >> k;

    for (int i = 19;; i++) {
        if (isPerfect(i))
            count++;
        if (count == k) {
            cout << i << endl;
            break;
        }
    }
    return 0;
}
