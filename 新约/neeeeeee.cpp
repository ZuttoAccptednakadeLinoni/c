//
// Created by k0itoYuu on 2025/9/24.
//
#include<bits/stdc++.h>
#define int long long
using namespace std;
/*
int fun(int a1,int a2,int b) {
	if (b <= min(a1,a2) + 1) {
		return ();
	}
	else if (b < a1 + a2) {
		int ans = 0;
		if (a1 > a2) swap(a1,a2);
		ans += (a1 * (a1 + 3) / 2) + (a1 + 1) * (a2 - a1);
		//ans +=
	}
	else {
		return a1 * a2;
	}
}
*/
int fun(int a1,int a2,int b) {
    if(a1>a2)swap(a1,a2);
    if (b == 0) return 0;
    if (b <= min(a1,a2)) {
        //	cout << 1 << endl;
        return (b + 3) * b/2;

    }
    else if (b < a1 + a2) {
        int ans = 0;
        if (a1 > a2) swap(a1,a2);
        ans += (a1 * (a1 + 3) / 2);

        if(b>a2){
            if(a1==a2){
                ans+=(2*a1+a2-b+1)*(a2-b+2)/2;
                return ans;
            }
            ans += (a1 + 1) * (a2 - a1);
            ans += (2*a1+a2-b+1)*(b-a1-1)/2;
            //cout << 2 << endl;
            return ans;
        }
        else{
            ans += (a1 + 1) * (b-a1);
            //cout << 3 << endl;
            return ans;
        }
    }
    else {
        // << 4 << endl;
        if(a1 == 0 ){

            return a2;
        }
        return a1 * a2 + a1 + a2;
    }
}
int n,m;
void solve(){
    cin>>n>>m;
    vector<vector<int> >v(n+2,vector<int>(m+2,0));
    for (int i = 0; i <= n; i++) {
        for (int j = 0; j <= m; j++) {
            v[i][j] -= (min(i,j) + min(i,m - j) + min(n - i,j) + min(n - i,m - j));
            v[i][j] += fun(j,m - j,n - i);
            v[i][j] += fun(j,m - j,i);
            v[i][j] += fun(i,n - i,j);
            v[i][j] += fun(i,n - i,m - j);
        }
    }
    for (int i = 0; i <= n; i++) {

        for (int j = 0; j <= m; j++) {
            cout << v[i][j] << ' ';
        }
        if(i!=n)cout << '\n';
    }
}
signed main(){
    cout << fun(0,5,5) << " " << fun(5,5,1) << " "<< fun(5,5,0) << " " << fun(2,2,3);
    ios::sync_with_stdio(false);
    cin.tie(0);cout.tie(0);
    solve();
}