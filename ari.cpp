#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef pair<int, int> P;

int main() {
  cin.tie(nullptr);
  ios::sync_with_stdio(false);

  int n, k;
  cin >> n >> k;

  ll ans = 0;
  for (int i = 0; i + k - 1 < n; i++) {
    ans++;
  }

  cout << ans << endl;

  return 0;
}