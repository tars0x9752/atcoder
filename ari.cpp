#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef pair<int, int> P;

int main() {
  cin.tie(nullptr);
  ios::sync_with_stdio(false);

  int n;
  cin >> n;

  vector<int> a(n * 3);
  for (int i = 0; i < n * 3; i++) {
    cin >> a[i];
  }

  sort(a.rbegin(), a.rend());

  ll ans = 0;
  for (int i = 1; i <= n; i++) {
    ans += a[i * 2 - 1];
  }

  cout << ans << endl;

  return 0;
}