#include<bits/stdc++.h>
using namespace std;
struct point{
	long long x;
	long long y;
};
int main(){
	int t;
	cin>>t;
	while(t--){
		int n;
		cin>>n;
		point a[100010];
		for(int i=1;i<=n;i++){
			cin>>a[i].x>>a[i].y;
		}
		long long xs,ys,xt,yt;
		cin>>xs>>ys>>xt>>yt;
		long long minx=0x3f3f3f;
		for(int i=1;i<=n;i++){
			minx=min(minx,(a[i].x-xt)*(a[i].x-xt)+(a[i].y-yt)*(a[i].y-yt));
		}
		long long d = (xs-xt)*(xs-xt)+(ys-yt)*(ys-yt);
		if(d>=minx){
			cout << "NO"<<endl;
		}
		else{
			cout << "YES" <<endl;
		}
	}
}
