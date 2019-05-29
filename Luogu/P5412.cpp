// [P5412 [YNOI2019]排队] https://www.luogu.org/problemnew/show/P5412
#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main()
{
    int T;
    cin >> T;

    while (T --> 0)
    {
        int n;
        cin >> n;

        vector<double> boy;
        vector<double> gir;

        boy.reserve(n);
        gir.reserve(n);

        bool sex[n];

        for (int i = 0; i < n; i++)
            cin >> sex[i];

        double temp;
        for (int i = 0; i < n; i++)
        {
            cin >> temp;
            if (sex[i] == 0)
            {
                gir.push_back(temp);
            } else {
                boy.push_back(temp);
            }
        }
        
        sort(boy.begin(), boy.end());
        sort(gir.begin(), gir.end());

        for (auto a : gir)
        {
            cout << a << " ";
        }
        cout << endl;

        for (auto a : boy)
        {
            cout << a << " ";
        }
        cout << endl;
    }    
    return 0;
}
