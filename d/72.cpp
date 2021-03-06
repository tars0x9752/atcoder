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

  ll n;
  cin >> n;
  vector<ll> p(n + 10);
  for (int i = 0; i < n; i++) {
    cin >> p[i];
    p[i]--;
  }

  ll ans = 0;
  for (int i = 0; i < n; i++) {
    if (p[i] == -1) continue;

    if (p[i] == i) {
      p[i + 1] = -1;
      ans++;
    }
  }

  cout << ans << ln;

  return 0;
}