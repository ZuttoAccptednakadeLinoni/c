#include<bits/stdc++.h>
using namespace std;
#define int long long


signed main(){
	int x,y;
	cin>>x>>y;
	int q=__gcd(x,y);
	int h=(x/q)*(y/q)/2+((x/q)*(y/q)%2);
	int ans=h*q;
	int t=(y/q);

	while(y>0){
		y-=t;
		ans+=(y)*(x/q);


	}
	cout<<ans<<endl;
	
} 
