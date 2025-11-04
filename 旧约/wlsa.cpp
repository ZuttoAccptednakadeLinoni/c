#include<bits/stdc++.h>
using namespace std;
int w[100005],u[100005],ans[100005];
map<string ,int >m;
struct d{
	int val,uni,id;
	bool operator < (const d &a)const {return val>a.val;}
}br[100005];
int main(){
	int n,k;
	cin>>n>>k;
	int t,q;
	cin>>t;
	for(int i=1;i<k;i++){
		cin>>q;
		t=min(t,q);
	}
	string s;
	int c=0;
	for(int i=1;i<=n;i++){
		cin>>w[i];
		cin>>s;
		if(!m[s])m[s]=++c;
		br[i]=(d){w[i],m[s],i};
	}
	sort(br+1,br+n+1);
	int now=0;
	for(int i=1;i<=n;i++){
		if(u[br[i].uni]==t)ans[br[i].id]=now;
		else{
			now++;
			u[br[i].uni]++;
			ans[br[i].id]=now;
		}
	}
	for(int i=1;i<=n;i++){
		cout<<ans[i]<<endl;
	}
	
} 
