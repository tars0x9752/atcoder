#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef pair<int, int> P;

int main() {
  cin.tie(nullptr);
  ios::sync_with_stdio(false);

  int a, b, c, d;
  cin >> a >> b >> c >> d;

  map<int, int> m;
  m[a]++;
  m[b]++;
  m[c]++;
  m[d]++;

  string ans = "NO";
  if (m[1] && m[9] && m[7] && m[4]) {
    ans = "YES";
  }

  cout << ans << endl;

  return 0;
}