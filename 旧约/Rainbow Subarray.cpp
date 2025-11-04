#include<bits/stdc++.h>
using namespace std;

long long int arr[500005];
long long int s[500005];
void solve(){
	int n,k;
	cin>>n>>k;
	multiset<long long int>smax;
	multiset<long long int> smin;
	for(int i=0;i<=n;i++){
		s[i]=0;
	}
	for(int i=1;i<=n;i++){
		cin>>arr[i];
		arr[i]=arr[i]-i;
		s[i]=s[i-1]+arr[i];
	}
	int l=1,r=1;
	smax.insert(arr[0]);
	while(l+r-1<=n){
		while(true){
			if(arr[l+r-1]>*smax.begin())smin.insert(-arr[l+r-1]);
			else smax.insert(arr[l+r-1]);
			while((smax.size()-smin.size()>1)&&(smin.size()-smax.size()<-1)){
				if(smax.size()>smin.size()) smin.insert(-*smax.begin()),smax.erase(*smax.begin());
				else smax.insert(-*smin.begin()),smin.erase(*smin.begin());
			}
			if(smax.size()>smin.size()){
				long long int m=*smax.begin();
				cout<<m<<" ";
				if((s[l+r-1]-s[l-1])-m*(r+1)<=k)r++;
				else break;
			}else if(smax.size()<smin.size()){
				long long int m=-*smin.begin();
				cout<<m<<" ";
				if((s[l+r-1]-s[l-1])-m*(r+1)<=k)r++;
				else break;
			}else{
				long long int m=(-*smin.begin()+*smax.begin())/2;
				cout<<m<<" ";
				if((s[l+r-1]-s[l-1])-m*(r+1)<=k)r++;
				else break;
			}
			cout<<r<<" \n";
			if(l+r-1>=n)break;
		}
		if(smax.find(arr[l])!=smax.end()){
			smax.erase(arr[l]);
		}else {
			smin.erase(-arr[l]);
		}
		l++;
	}
	cout<<r<<"!"<<endl;
}

int main(){
	int t;
	cin>>t;
	while(t--){
		solve();
	}
} 
