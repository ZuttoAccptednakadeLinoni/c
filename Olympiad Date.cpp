#include<bits/stdc++.h>
using namespace std;

void solve(){
	int a=3,b=1,c=2,d=1,e=1;
	int n,q;
	cin>>n;
	int ans=0;
	for(int i=0;i<n;i++){
		cin>>q;
		if(q==0&&a>0)a--;
		else if(q==1&&b>0)b--;
		else if(q==2&&c>0)c--;
		else if(q==3&&d>0)d--;
		else if(q==5&&e>0)e--;
		if(a+b+c+d+e==0&&ans==0){
			ans=i+1;
		}
	}
	cout<<ans<<endl;
}

int main(){
	int t;
	cin>>t;
	while(t--)solve();
}


