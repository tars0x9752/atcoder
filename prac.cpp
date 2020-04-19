#include <bits/stdc++.h>
#define all(x) (x).begin(), (x).end()
#define rall(x) (x).rbegin(), (x).rend()
using namespace std;
using ll = long long;
using P = pair<ll, ll>;
const string ln = "\n";
constexpr int INF = 1001001001;
constexpr int MOD = 1000000007;

int main() {
  cin.tie(nullptr);
  ios::sync_with_stdio(false);

  ll n, m, k;
  cin >> n >> m >> k;

  string ans = "No";
  for (ll x = 0; x <= m; x++) {
    for (ll y = 0; y <= n; y++) {
      ll val = n * y - (y * x) + m * x - (y * x);

      if (val == k) {
        printf("x: %lld, y: %lld, ny: %lld, mx: %lld \n", x, y, n * y - (y * x),
               m * x - (y * x));
        ans = "Yes";
      }
    }
  }

  cout << ans << ln;

  return 0;
}
