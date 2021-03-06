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

  ll n, h;
  cin >> n >> h;
  vector<ll> a(n), b(n);
  for (int i = 0; i < n; i++) {
    cin >> a[i] >> b[i];
  }

  sort(all(b));
  reverse(all(b));

  ll ma = *max_element(all(a));

  ll cnt = 0;
  for (int i = 0; i < n; i++) {
    if (b[i] < ma) {
      break;
    }

    h -= b[i];
    cnt++;

    if (h <= 0) {
      break;
    }
  }

  if (h > 0) {
    cnt += (h + ma - 1) / ma;
  }

  cout << cnt << endl;

  return 0;
}