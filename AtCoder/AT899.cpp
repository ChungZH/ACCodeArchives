// [AT899 投票] https://www.luogu.org/problemnew/show/AT899
#include <iostream>
#include <map>
#include <algorithm>
using namespace std;

string s;
map<string, int> m;

int maxx = 0;
string maxs;

int main()
{
    int n;
    cin >> n;

    
    for (int i = 0; i < n; i++)
    {
        cin >> s;
        m[s]++;
        
        if (m[s] > maxx)
        {
            maxx = m[s];
            maxs = s;
        }
    }

    cout << maxs << endl;
    
    return 0;
}