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

  ll n, p;
  cin >> n >> p;
  vector<ll> a(n);
  ll e = 0;
  ll o = 0;
  for (int i = 0; i < n; i++) {
    cin >> a[i];
    if (a[i] % 2) {
      o++;
    } else {
      e++;
    }
  }

  ll ans = 0;
  if(e == n) {
    ans = p ? 0 : pow(2, e);
  } else {
    ans = pow(2, n - 1);
  }

  cout << ans << ln;

  return 0;
}