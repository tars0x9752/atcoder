#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef pair<int, int> P;

int main() {
  cin.tie(nullptr);
  ios::sync_with_stdio(false);

  int n;
  cin >> n;

  vector<int> a(n);
  for (int i = 0; i < n; i++) {
    cin >> a[i];
  }

  map<ll, ll> dp;
  for (int i = 0; i < n; i++) {
    for (int num = -100; num <= 100; num++) {
      int v = (num - a[i]) * (num - a[i]);

      dp[num] += v;
    }
  }

  ll ans = 1e9;
  for (auto p : dp) {
    ans = min(ans, p.second);
  }

  cout << ans << endl;

  return 0;
}