#include <bits/stdc++.h>
#define all(x) (x).begin(), (x).end()
using namespace std;
using ll = long long;
using P = pair<ll, ll>;
const string ln = "\n";
constexpr int INF = 1001001001;
constexpr int MOD = 1000000007;

int main() {
  cin.tie(nullptr);
  ios::sync_with_stdio(false);

  int n, r;
  cin >> n >> r;

  int ans = 0;
  if (n >= 10) {
    ans = r;
  } else {
    ans = 100 * (10 - n) + r;
  }

  cout << ans << ln;

  return 0;
}