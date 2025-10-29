#include <iostream>
using namespace std; 
long long countBigRegularTriangles(long long n) {
    long long cnt = 0;
    for (long long len = 2; len <= n; len++) {
        for (long long d = len; d <= n; d++) {
            cnt += (d - len + 1);
        }
    }
    return cnt;
}

long long countBigInvertedTriangles(long long n) {
    long long cnt = 0;
    for (long long len = 2; len <= n / 2; len++) {
        for (long long d = len; d <= n - len; d++) {
            cnt += (d - len + 1);
        }
    }
    return cnt;
}

int main() {
    long long n, a, b;
    std::cin >> n >> a >> b;

    long long cnt1 = n * n;  // 所有小三角形

    long long cnt2 = countBigRegularTriangles(n);  // 所有大正三角形数

    long long cnt3 = countBigInvertedTriangles(n);  // 所有大倒三角形数

        cnt4+=b;

    long long cnt5 = 0;
        cnt5+=(b-a);


    long long cnt6 = 0;
    for (long long i = b; i > 0; i--) {
        if (i <= n - 2) {
            cnt6++;
        }
    }

    long long cnt7 = 0;
    for (long long i = b; i < a; i++) {
        if (i - b + 2 <= n - a) {
            cnt7++;
        }
    }

    long long totalcnt = cnt1 + cnt2 + cnt3 - cnt4 - cnt5 - cnt6 - cnt7;
    cout << totalcnt <<endl;

    return 0;
}
