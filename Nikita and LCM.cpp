#include<bits/stdc++.h>
using namespace std;
int a[2005];
void solve(){
	int m=1,n,num,max=0,ans=0;
	map<int ,int > mm;
	cin>>n;
	for(int i=0;i<n;i++){
		cin>>a[i];
		mm[a[i]]++;
	}
	for(int i=0;i<n;i++){
		m=m*a[i]/__gcd(m,a[i]);
	}
	sort(a,a+n);
	if(m!=a[n-1]){
		cout<<n<<endl;
		return ;
	}
	for(int i=m;i>0;i--){
		num=0;
		for(int j=0;j<n;j++){
			if(i%a[j]==0)num++;
		}
		if(num>=max&&mm[i]==0){
			max=num;
			ans=i;
		}
		
	}
	cout<<max<<endl;
}
int main(){
	int t;
	cin>>t;
	while(t--){
		solve();
	}
} 
