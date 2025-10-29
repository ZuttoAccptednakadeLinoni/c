#include<bits/stdc++.h>
using namespace std;

void solve(){
	long long int xm,ym,zx,zm,ans1,ans2;
	cin>>xm>>ym>>zx>>zm;
	ans1=(zx+xm)*(zx+xm)+(ym-zm)*(ym-zm);
	ans2=(zx-xm)*(zx-xm)+(ym+zm)*(ym+zm);
	printf("%.9f\n",min(sqrt(ans1),sqrt(ans2)));
}
int main(){
	int t;
	cin>>t;
	while(t--){
		solve();
		
	}
}
