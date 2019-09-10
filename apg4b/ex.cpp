#include <bits/stdc++.h>
using namespace std;

int main() {
  cin.tie(0);
  ios::sync_with_stdio(false);

  int n;
  cin >> n;

  vector<int> a(n);
  for (int i = 0; i < n; i++) {
    cin >> a.at(i);
  }

  sort(a.begin(), a.end(), greater<int>());

  int alice = 0;
  int bob = 0;
  for (int i = 0; i < n; i++) {
    if (i % 2 == 0) {
      alice += a.at(i);
    } else {
      bob += a.at(i);
    }
  }

  cout << alice - bob << endl;

  return 0;
}