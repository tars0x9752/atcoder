#include <bits/stdc++.h>
using namespace std;
using ll = long long;
using P = pair<ll, ll>;
const string ln = "\n";
constexpr int INF = 1001001001;
constexpr int MOD = 1000000007;

int main() {
  cin.tie(nullptr);
  ios::sync_with_stdio(false);

  int a, b, k;
  cin >> a >> b >> k;

  while (k) {
    b += a / 2;
    a /= 2;
    --k;

    if (k == 0) break;
    a += b / 2;
    b /= 2;
    --k;
  }

  cout << a << " " << b << ln;

  return 0;
}