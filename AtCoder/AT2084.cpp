// [AT2084 CF] https://www.luogu.org/problemnew/show/AT2084
#include <iostream>
using namespace std;

int main()
{
    bool c = false, f = false;
    string s;
    cin >> s;

    int slen = s.length();
    
    for (int i = 0; i < slen; i++)
    {
        if (s[i] == 'C') 
        {
            for (int j = i+1; j < slen; j++)
            {
                if (s[j] == 'F')
                {
                    cout << "Yes" << endl;
                    return 0;
                }
            }
        }
        
    }

    cout << "No" << endl;
    return 0;
}
