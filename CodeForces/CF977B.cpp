// [CF977B Two-gram] https://www.luogu.org/problem/CF977B
#include <iostream>
#include <map>
#include <algorithm>
using namespace std;

int main()
{
    int n;
    cin >> n;
    string a, temp;
    cin >> a;


    map<string, int> m;
    int maxa = 0;
    string ta;
    for (int i = 0; i < n-1; i++)
    {
        temp = a.substr(i, 2);
        m[temp]++;
        if (m[temp] > maxa) 
        {
            maxa = m[temp];
            ta = temp;
        }
    }

    cout << ta << endl;
    return 0;
}