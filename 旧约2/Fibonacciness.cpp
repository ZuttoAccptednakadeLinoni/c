#include<bits/stdc++.h>
using namespace std;

void solve(){
	int a,b,c,d,e;
	cin>>a>>b>>d>>e;
	c=a+b;
	int ans=0;
	ans=max(ans,(a+b==c)+(b+c==d)+(c+d==e));
	c=d-b;
	ans=max(ans,(a+b==c)+(b+c==d)+(c+d==e));
	c=e-d;
	ans=max(ans,(a+b==c)+(b+c==d)+(c+d==e));
	cout<<ans<<endl;;
}

int main(){
	int t;
	cin>>t;
	while(t--)solve();
}
