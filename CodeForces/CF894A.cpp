// [CF894A QAQ] https://www.luogu.org/problemnew/show/CF894A
#include <iostream>
using namespace std;
int ans;
int main()
{
    string a;
    cin >> a;

    const int alen = a.length();

    for (int i = 0; i < alen - 2; i++) {
        if (a[i] == 'Q') {
            for (int j = i + 1; j < alen - 1; j++) {
                if (a[j] == 'A') {
                    for (int k = j + 1; k < alen; k++) {
                        if (a[k] == 'Q') {
                            ans++;
                        }
                    }
                }
            }
        }
    }

    cout << ans << endl;
    return 0;
}
