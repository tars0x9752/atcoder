#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef pair<int, int> P;

int main() {
  cin.tie(nullptr);
  ios::sync_with_stdio(false);

  int a, b, c;
  cin >> a >> b >> c;

  string ans = "No";
  if (a == b && a == c) {
    ans = "Yes";
  }

  cout << ans << endl;

  return 0;
}