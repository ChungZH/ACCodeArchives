// [UVA10815 安迪的第一个字典 Andy's First Dictionary] https://www.luogu.org/problemnew/show/UVA10815
#include <cctype>
#include <iostream>
#include <set>
#include <sstream>

using namespace std;

set<string> dict;

int main()
{

    string s, buf;
    while (cin >> s) {
        for (int i = 0; i < s.length(); i++) {
            if (isalpha(s[i]))
                s[i] = tolower(s[i]);
            else
                s[i] = ' ';
        }

        stringstream ss(s);
        while (ss >> buf)
            dict.insert(buf);
    }

    for (auto it = dict.begin(); it != dict.end(); ++it) {
        cout << *it << "\n";
    }
    return 0;
}