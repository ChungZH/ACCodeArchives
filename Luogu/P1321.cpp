// [P1321 单词覆盖还原] https://www.luogu.org/problemnew/show/P1321
#include<bits/stdc++.h>

using namespace std;

int main() {
    int boyCount = 0, girlCount = 0;
    string s;
    cin >> s;
    for(int i = 0; i < s.length()-2; i++){
        if(s[i] == 'b' || s[i+1]=='o' || s[i+2]=='y') { boyCount++; }
        if(s[i] == 'g' || s[i+1]=='i' || s[i+2]=='r' || s[i+3]=='l') { girlCount++; }
    }
    cout << boyCount << endl << girlCount;
    return 0;
}
