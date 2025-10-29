#include<bits/stdc++.h>
using namespace std;

void solve(){
	int n,k;
	cin>>n>>k;
	priority_queue<int>q;
	int w,m=0;
	cin>>w;
	int ans=0;
	for(int i=1;i<n;i++){
		cin>>w;
		m+=k;
		if(w<=m){
			q.push(w);
			ans++;
			m-=w;
		}else{
			if(!q.empty()){
				if(w<q.top()){
				int e=q.top();
				m+=e;
				m-=w;
				q.pop();
				q.push(w);
			}	
			}
			
		}
	}
	cout<<ans<<endl;
}

int main(){
	int t;
	cin>>t;
	while(t--)solve();
} 
