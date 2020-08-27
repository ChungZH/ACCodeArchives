// [P4058 [Code+#1]木材] https://www.luogu.com.cn/problem/P4058
#include <cstdio>
#include <iostream>
using namespace std;
typedef unsigned long long ull;
typedef long long ll;
ull n, s, l, h[200005], a[200005];
inline bool check(ll x) {
  ull cnt = 0;
  for (int i = 0; i < n && cnt < s; i++) {
    if (h[i] + x * a[i] >= l) cnt += h[i] + x * a[i];
  }
  if (cnt >= s) return 1;
  return 0;
}
int main() {
  ull ts = 0;
  cin >> n >> s >> l;
  for (int i = 0; i < n; i++) cin >> h[i], ts += h[i];
  for (int i = 0; i < n; i++) cin >> a[i];

  if (check(0)) {
    cout << 0;
    return 0;
  }

  ll L = 0, R = 100000000000000000ll;
  while (L + 1 < R) {
    ll M = (L + R) / 2;
    if (check(M))
      R = M;
    else
      L = M;
  }
  cout << R << endl;
  return 0;
}