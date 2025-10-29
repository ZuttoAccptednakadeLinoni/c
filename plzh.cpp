#include<bits/stdc++.h>
using namespace std;

int a[100005];
int b[100005];
int ans[100005];

int main(){
	int n,k,x,y;
	int q;
	cin>>n>>k>>x>>y;
	for(int i=0;i<n;i++){
		cin>>q;
		if(q<=k)a[q]++;
	}
	for(int i=0;i<n;i++){
		cin>>q;
		if(q<=k)b[q]++;
	}
	for(int i=1;i<=k;i++){
		if((a[i]&&!b[i])||(!a[i]&&b[i])){
			ans[i]++;
			if(a[i])x--;
			if(b[i])y--;
			if(x<0||y<0){
				cout<<"NO";
				return 0;
			}
		}else if(!a[i]&&!b[i]){
			cout<<"NO";
			return 0;
		}
	}
	int num=x+y;
	for(int i=1;i<=k;i++){
		if(!ans[i]){
			num--;
			if(num<0){
				cout<<"NO";
				return 0;
			}
		}
	}
	cout<<"YES";
}
