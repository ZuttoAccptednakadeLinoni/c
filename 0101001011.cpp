#include<bits/stdc++.h>
using namespace std;

int a[2000005],b[2000005];
struct d{
	int num,n1,n2;
}ww[2000005];

int find(int x){
	return a[x]==x?x:a[x]=find(a[x]);
} 
void unset(int x,int y){
	a[find(y)]=find(x);
}

int qpow(int z,int x,int p){ //¿ìËÙÃÝ 
  int s=1;
  while(x){
    if(x&1) s=(long long )s*z%p;
    z=(long long)z*z%p;
    x>>=1; 
  }
  return s;
}



void solve(){
	int n,m;
	bool f=1;
	cin>>n>>m;
	string s;
	for(int i=1;i<=2*max(n,m);i++) {
		a[i]=i;
		ww[i].num=0;
		ww[i].n1=0;
		ww[i].n2=0;
		b[i]=0;
	}
	for(int i=1;i<=n;i++){
		cin>>s;
		for(int j=0;j<m;j++){
			if(s[j]=='1'){
				ww[j+1].num++;
				if(ww[j+1].num==1)ww[j+1].n1=i;
				else if(ww[j+1].num==2)ww[j+1].n2=i;
				else if(ww[j+1].num==3)f=0;
			}
		}
	}
	for(int i=1;i<=m/2;i++){
		if(ww[i].num+ww[m-i+1].num>2)f=0;
	}
	if(m%2==1)if(ww[m/2+1].num>1)f=0;
	
	if(!f){
		cout<<0<<endl;
		return ;
	}
	if(m==1&&ww[1].num==2){
		cout<<0<<endl;
		return;
	}
	
	for(int i=1;i<=m;i++){
		if(ww[i].num){
			if(ww[i].num==2){
				unset(ww[i].n1,ww[i].n2+n);
				unset(ww[i].n2,ww[i].n1+n);
			}else if(ww[i].num==1&&ww[m-i+1].num==1){
				unset(ww[i].n1,ww[m-i+1].n1);
				unset(ww[i].n1+n,ww[m-i+1].n1+n);
			}
		}
	}
	for(int i=1;i<=n;i++){
		if(find(i)==find(i+n))f=0;
	}
	if(!f){
		cout<<0<<endl;
		return ;
	}
	int ans=0;
	for(int i=1;i<=2*n;i++){
		if(find(i)==i)ans++;
	}
	
	int as=qpow(2,ans/2,1e9+7);
	cout<<as<<endl;
}
/*
3
3 5
01100
10001
00010
2 1
1
1
2 3
001
001

*/


int main(){
	int t;
	cin>>t;
	while(t--){
		solve();
	}
}
