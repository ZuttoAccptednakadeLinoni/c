#include<bits/stdc++.h>
using namespace std;
const int N=2e5+5;
int a[N],b[N],p[N],s[N];
void solve(){
	int n,ans=0;
	cin>>n;
	for(int i=1;i<=n;i++){
		cin>>a[i];
	}
	p[0]=s[n]=1,b[n]=1e9;
	for(int i=1;i<n;i++){
		b[i]=__gcd(a[i],a[i+1]);
		p[i]=p[i-1]&&b[i]>=b[i-1];
	}
	for(int i=n-1;i>=0;i--){
		s[i]=s[i+1]&&b[i]<=b[i+1];
	}
	for(int i=1;i<=n;i++){
		ans |= (i <= 2 || p[i - 2]) &&
          (i >= n || s[i + 1]) &&
          (i == 1 || i == n || 
           (b[i - 2] <= __gcd(a[i - 1], a[i + 1]) && 
            __gcd(a[i - 1], a[i + 1]) <= b[i + 1]));
	}
	cout<<(ans?"YES":"NO")<<"\n";
}

int main(){
	int t;
	cin>>t;
	while(t--){
		solve();
	}
}
