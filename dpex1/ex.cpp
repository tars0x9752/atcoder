#include <bits/stdc++.h>
using namespace std;
using ll = long long;
using P = pair<ll, ll>;
constexpr int INF = 1001001001;
constexpr int MOD = 1000000007;

int main() {
  cin.tie(nullptr);
  ios::sync_with_stdio(false);

  int n;
  cin >> n;

  int abc[n][3];
  for (int i = 0; i < n; i++) {
    cin >> abc[i][0] >> abc[i][1] >> abc[i][2];
  }

  ll dp[n + 10][3] = {};

  for (int i = 0; i < n; i++) {
    for (int j = 0; j < 3; j++) {
      for (int k = 0; k < 3; k++) {
        if(j == k) continue;
        dp[i + 1][k] = max(dp[i + 1][k], dp[i][j] + abc[i][k]);
      }
    }
  }

  ll ans = 0;
  for (int i = 0; i < 3; i++) {
    ans = max(ans, dp[n][i]);
  }

  cout << ans << endl;

  return 0;
}