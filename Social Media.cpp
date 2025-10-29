#include<bits/stdc++.h>
using namespace std;

int arr[200005],d[200005];

void solve(){
	int n,m,k;
	int q;
	int ans=0;
	cin>>n>>m>>k;
	for(int i=0;i<=k;i++){
		arr[i]=0;d[i]=0;
	}
	for(int i=0;i<n;i++){
		cin>>q;
		arr[q]++;
	}
	int a,b,num=0;
	map<int,int>mp;
	for(int i=0;i<m;i++){
		cin>>a>>b;
		if(arr[a]&&arr[b])ans++;
		else if(arr[a]&&!arr[b])d[b]++;
		else if(!arr[a]&&arr[b])d[a]++;
		else if(!arr[a]&&!arr[b]){
			if(a==b){
				d[a]++;
				continue;
			}
			int t;
			t=a+b;
			a=t-max(a,b);
			b=t-a;
			mp[a*19260817+b]++;
			num++;
		}
	}
	if(num==0){
		sort(d,d+k+1);
		cout<<ans+d[k-1]+d[k]<<endl;
		
	}else{
		int ansm=0;
		for (auto it = mp.begin(); it!= mp.end(); it++) {
    		int q,w;
    		w=it->first%19260817;
    		q=it->first/19260817;
    		ansm=max(ansm,ans+it->second+d[q]+d[w]);
		}
		cout<<ansm<<endl;
	}
	
}

int main(){
	int t;
	cin>>t;
	while(t--)solve();
}
