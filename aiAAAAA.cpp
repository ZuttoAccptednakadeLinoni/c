//
// Created by k0itoYuu on 2025/7/17.
//
#include <iostream>
#include <vector>
using namespace std;

const int mod = 998244353;
const int MAX_N = 500000;
vector<long long> pow2(MAX_N + 10);

void precompute_pow2() {
    pow2[0] = 1;
    for (int i = 1; i <= MAX_N; i++) {
        pow2[i] = (pow2[i - 1] * 2) % mod;
    }
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    precompute_pow2();

    int T;
    cin >> T;
    while (T--) {
        int n;
        cin >> n;
        vector<int> a(n);
        int k0 = 0;
        for (int i = 0; i < n; i++) {
            cin >> a[i];
            if (a[i] == -1) {
                k0++;
            }
        }

        long long ans = 0;

        if (a[0] == -1) {
            if (k0 >= 1) {
                ans = (ans + pow2[k0 - 1]) % mod;
            }
        } else {
            if (a[0] == 1) {
                ans = (ans + pow2[k0]) % mod;
            }
        }

        for (int i = 1; i < n; i++) {
            int base = 0;
            if (a[i] != -1) {
                if (a[i] == 1) {
                    if (a[i - 1] == -1) {
                        base = 1;
                    } else {
                        if (a[i - 1] == 0) {
                            base = 1;
                        } else {
                            base = 0;
                        }
                    }
                }
            } else {
                if (a[i - 1] != -1) {
                    if (a[i - 1] == 0) {
                        base = 1;
                    } else {
                        base = 0;
                    }
                } else {
                    base = 1;
                }
            }

            int t = 0;
            if (a[i - 1] == -1) t++;
            if (a[i] == -1) t++;

            if (base) {
                if (k0 >= t) {
                    ans = (ans + pow2[k0 - t]) % mod;
                }
            }
        }

        cout << ans % mod << endl;
    }
    return 0;
}