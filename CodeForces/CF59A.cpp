// [CF59A Word] https://www.luogu.org/problemnew/show/CF59A

#include <iostream>
#include <algorithm>
#include <cctype>

using namespace std;


int main()
{
    string s;
    cin >> s;

    int sLen = s.length();
    int lowerNum = 0, upperNum = 0;

    for (int i = 0; i < sLen; i++)
    {
        if (islower(s[i]))
        {
            lowerNum++;
        } else {
            upperNum++;
        }
    }

    if (lowerNum == upperNum || lowerNum > upperNum)
    {
        transform(s.begin(), s.end(), s.begin(), ::tolower);  
    } else {
        transform(s.begin(), s.end(), s.begin(), ::toupper);  
    }
    
    cout << s << endl;
    return 0;
}