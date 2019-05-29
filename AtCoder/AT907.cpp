// [AT907 心配性な富豪、ファミリーレストランに行く。] https://www.luogu.org/problemnew/show/AT907
#include <iostream>
#include <algorithm>

using namespace std;

int main()
{
    int N;
    cin >> N;

    int a[N];
    for (int i = 0; i < N; i++)
    {
        cin >> a[i];
    }

    int max1 = 0, max2 = 0;

    for (int i = 0; i < N; i++)
    {
        if (a[i] > max1)
        {
            max1 = a[i];
        }
    }

    for (int i = 0; i < N; i++)
    {
        if (a[i] < max1 && a[i] > max2) 
        {
            max2 = a[i];
        }
    }

    cout << max2 << endl;
    return 0;
}
