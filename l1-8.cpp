#include<bits/stdc++.h>
using namespace std;
#define pp pair<int,int>
int arr[1005][1005];
struct b{
	int x,y,h;
};
vector<b>v;
bool cmp(b x,b y){
	return x.h>y.h;
}
int main(){
	int n,m,k;
	cin>>n>>m>>k;
	map<int,int>x;
	map<int,int>y;
	for(int i=1;i<=n;i++){
		for(int j=1;j<=m;j++){
			cin>>arr[i][j];
			v.push_back({i,j,arr[i][j]});
		}
	}
	sort(v.begin(),v.end(),cmp);
	for(int i=0;i<n*m;i++){
		if(k==0)break;
		if(!(x[v[i].x])&&!(y[v[i].y])){
			x[v[i].x]++;y[v[i].y]++;
			k--;
		}
	}
	for(int i=1;i<=n;i++){
		int f=1,ff=1;
		for(int j=1;j<=m;j++){
			if(!(x[i])&&!(y[j])){
				if(ff){
					cout<<arr[i][j];
					ff=0;
				}else cout<<" "<<arr[i][j];
				
				f=0;
			}
			
		}
		if(!f)cout<<endl;
	}
}
