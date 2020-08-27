// [P6467 [COCI2008-2009#6]BUKA] https://www.luogu.com.cn/problem/P6467
#include <algorithm>
#include <iostream>
#include <string>
using namespace std;
string a, b;
char op;
int main() {
  cin >> a >> op >> b;

  if (op == '*') {
    cout << 1;
    for (int i = 0; i < a.length() + b.length() - 2; i++) {
      cout << 0;
    }
  } else {
    if (a.length() == b.length()) {
      cout << 2;
      for (int i = 0; i < a.length() - 1; i++) {
        cout << 0;
      }
    } else {
      for (int i = max(a.length(), b.length()); i > 0; i--) {
        if (i == a.length() || i == b.length()) {
          cout << 1;
        } else {
          cout << 0;
        }
      }
    }
  }
  cout << '\n';
  return 0;
}