//
// Created by k0itoYuu on 2025/6/23.
//
#include "bits/stdc++.h"

using namespace std;

const int64_t _base1 = 31, _base2 = 37;
const int64_t inf = 1000000 + 10;
const int64_t _mod1 = 1000000007;
const int64_t _mod2 = 2000000033;
int64_t _inv1, _inv2;
vector<int64_t> _pow1(inf), _pow2(inf);

int64_t power(int64_t b, int64_t n, int64_t mod) {
    b %= mod;
    int64_t ret = 1;
    while (n) {
        if (n % 2 == 1)
            ret = ret * b % mod;
        b = b * b % mod;
        n /= 2;
    }
    return ret;
}

void initial() {
    _inv1 = power(_base1, _mod1 - 2, _mod1);
    _inv2 = power(_base2, _mod2 - 2, _mod2);
    _pow1[0] = _pow2[0] = 1;
    for (int i = 1; i < inf; ++i) {
        _pow1[i] = _pow1[i - 1] * _base1 % _mod1;
        _pow2[i] = _pow2[i - 1] * _base2 % _mod2;
    }
}

struct hashing {
    int64_t _H1 = 0, _H2 = 0;
    deque<char> digit;

    void _push_back(char ch) {
        int64_t v = ch - 'a' + 1;
        _H1 = (_H1 * _base1 + v) % _mod1;
        _H2 = (_H2 * _base2 + v) % _mod2;
        digit.push_back(ch);
    }

    void _push_front(char ch) {
        int64_t v = ch - 'a' + 1;
        size_t n = digit.size();
        _H1 = (v * _pow1[n] + _H1) % _mod1;
        _H2 = (v * _pow2[n] + _H2) % _mod2;
        digit.push_front(ch);
    }

    void _pop_back() {
        int64_t v = digit.back() - 'a' + 1;
        _H1 = (_H1 - v + _mod1) % _mod1;
        _H2 = (_H2 - v + _mod2) % _mod2;
        _H1 = _H1 * _inv1 % _mod1;
        _H2 = _H2 * _inv2 % _mod2;
        digit.pop_back();
    }

    void _pop_front() {
        int64_t v = digit.front() - 'a' + 1;
        size_t n = digit.size() - 1;
        _H1 = (_H1 - (v * _pow1[n]) % _mod1 + _mod1) % _mod1;
        _H2 = (_H2 - (v * _pow2[n]) % _mod2 + _mod2) % _mod2;
        digit.pop_front();
    }

    pair<int64_t, int64_t> get() {
        return {_H1, _H2};
    }
};


void solve() {
    int64_t n;
    cin >> n;
    bool ok = 0;
    for (int mask = 2; mask <= 62 and !ok; ++mask) {
        int64_t base = 0;
        int _max = ((63 - __builtin_clzll(n)) / mask);

        for (int bit = _max; bit >= 0; --bit) {
            int64_t need = base | (1LL << bit);
            __int128 _pow = 1;

            for (int i = 0; i < mask; ++i) {
                _pow *= need;
                if (_pow > n) break;
            }
            if (_pow <= n) {
                base = need;
            }
        }

        if (base < 2) continue;
        __int128 sum = 1, term = 1;

        for (int i = 1; i <= mask; ++i) {
            term *= base;
            sum += term;
            if (sum > n) break;
        }

        if (sum == n) {
            ok = true;
            break;
        }
    }
    cout << (ok ? "YES" : "NO") << '\n';
}


signed main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);
    int testCases;
    cin >> testCases;
    while (testCases--) solve();
    return 0;
}