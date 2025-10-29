//
// Created by k0itoYuu on 2025/7/31.
//
#include<bits/stdc++.h>
#define int long long
using namespace std;
const int mode = 998244353;
void solve() {
    int n;
    cin>>n;
    int a[25];
    int b[25]{};
    for (int i=1;i<=n;i++) {
        a[i] = i;
    }
    int cnty=0;
    int cnt = 0;
    int cntr=0;
    do {
        stack<int> st;
        for (int i =1;i<=n;i++) {
            while (!st.empty() && st.top() > a[i] ) {
                st.pop();
            }
            st.push(a[i]);
        }
        b[st.size()]++;
        cnty+=st.size();
        cntr+=pow(st.size(),2);
        cnt+=pow(st.size(),3);
//        while(!st.empty()){
//            cout<<st.top()<<" ";
//            st.pop();
//        }
        cout<<endl;

    }while(next_permutation(a+1, a+n+1));
    for (int i=n;i>=1;i--) {
        cout << i << " " << b[i] << endl;
    }
    cout<<cnty<<" " <<cntr<<" "<< cnt << endl;
}
signed main() {
    solve();
}