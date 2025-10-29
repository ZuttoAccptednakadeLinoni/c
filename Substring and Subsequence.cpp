#include<bits/stdc++.h>
using namespace std;

void solve(){
	string a,b;
	cin>>a>>b;
	int ans=a.size()+b.size();
	for(int i=0;i<b.size();i++){
		int j=i;
		for(auto c:a){
			if(c==b[j]&&j<b.size())j++;
		}
		ans=min(ans,(int)(a.size()+b.size())-(j-i));
	}
	cout<<ans<<endl;
}


int main(){
	int t;
	cin>>t;
	while(t--)solve();
}
