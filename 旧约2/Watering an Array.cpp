#include<bits/stdc++.h>
using namespace std;
int arr[2005];
int x[100005];
int mmm[200005];
void solve(){
	int a,k,d;
	map<int,int>m;
	cin>>a>>k>>d;

	for(int i=1;i<=a;i++){
		cin>>arr[i];
	}
	cin>>x[1];
	mmm[1]=x[1];
	for(int i=2;i<=k;i++){
		cin>>x[i];
		if(x[i]>mmm[i-1])mmm[i]=x[i];
		else mmm[i]=mmm[i-1];
	}
	for(int i=k+1;i<2*a;i++){
		mmm[i]=mmm[i-1];
	}
	vector<int>v;
	for(int i=1;i<=a;i++){
		int q=i-arr[i];
		if(q<0)continue;
		if(q==0)v.push_back(i);
		if(q!=0){
			int num=1;
			for(int j=1;j<=min(2*a,d-1);j++){
				if(num==k+1)num=1;
			if(x[num]>=i)q--;
			if(q==0){
				m[j]++;
//				cout<<j<<"i"<<i<<endl;
				break;
			}
			num++;
		}
		}
		
	}
	int maxx=0,maxn;
	int ans=(d-1)/2+v.size();
	for(auto i:m){
		int r=0;
//		cout<<i.first<<" "<<i.second<<endl;
		if(i.first>=d)continue;
		for(auto j:v){
//			cout<<i.first<<"!\n";
			if(j>mmm[i.first])r++;
		}
//		cout<<r<<endl;
		ans=max(i.second+(d-i.first-1)/2+r,ans);
	}


	cout<<ans<<endl;
}

int main(){
	int t;
	cin>>t;
	while(t--)solve();
} 
