#include <iostream>

using namespace std;

const int kMaxN = 2e5 + 5;

int a[kMaxN], b[kMaxN], p[kMaxN], s[kMaxN], t, n, ans;

int gcd(int n, int m) {
  return !m ? n : gcd(m, n % m);
}

int main() {
  ios::sync_with_stdio(0), cin.tie(0), cout.tie(0);
  for (cin >> t; t; t--) {
    cin >> n, ans = 0;
    for (int i = 1; i <= n; i++) {
      cin >> a[i];
    }
    p[0] = s[n] = 1, b[n] = 1e9;
    for (int i = 1; i < n; i++) {
      b[i] = gcd(a[i], a[i + 1]);
      p[i] = p[i - 1] && b[i] >= b[i - 1];
    }
    for (int i = n - 1; i; i--) {
      s[i] = s[i + 1] && b[i] <= b[i + 1];
    }
    for (int i = 1; i <= n; i++) { 
      ans |= (i <= 2 || p[i - 2]) &&
          (i >= n || s[i + 1]) &&
          (i == 1 || i == n || 
           (b[i - 2] <= gcd(a[i - 1], a[i + 1]) && 
            gcd(a[i - 1], a[i + 1]) <= b[i + 1]));
    }
    cout << (ans ? "YES" : "NO") << '\n';
  }
  return 0;
}
