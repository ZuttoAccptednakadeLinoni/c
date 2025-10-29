//
// Created by k0itoYuu on 2025/7/15.
//
#include <iostream>
#include <vector>
#include <cmath>

using namespace std;

typedef long long ll;

bool is_prime(ll num) {
    if (num <= 1) return false;
    if (num == 2) return true;
    if (num % 2 == 0) return false;
    for (ll i = 3; i * i <= num; i += 2) {
        if (num % i == 0) return false;
    }
    return true;
}

vector<ll> sieve(ll n) {
    vector<bool> is_prime(n + 1, true);
    is_prime[0] = is_prime[1] = false;
    for (ll i = 2; i * i <= n; ++i) {
        if (is_prime[i]) {
            for (ll j = i * i; j <= n; j += i) {
                is_prime[j] = false;
            }
        }
    }
    vector<ll> primes;
    for (ll i = 2; i <= n; ++i) {
        if (is_prime[i]) {
            primes.push_back(i);
        }
    }
    return primes;
}

ll mod_pow(ll base, ll exp, ll mod) {
    ll result = 1;
    base %= mod;
    while (exp > 0) {
        if (exp % 2 == 1) {
            result = (result * base) % mod;
        }
        base = (base * base) % mod;
        exp /= 2;
    }
    return result;
}

int main() {
    ll n, p;
    cin >> n >> p;

    if (n >= p) {
        cout << 0 << endl;
        return 0;
    }

    vector<ll> primes = sieve(n);

    ll result = 1;
    for (ll q : primes) {
        ll max_power = 1;
        while (max_power * q <= n) {
            max_power *= q;
        }
        result = (result * max_power) % p;
    }

    cout << result << endl;
    return 0;
}