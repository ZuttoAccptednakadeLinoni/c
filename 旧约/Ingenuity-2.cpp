#include<bits/stdc++.h>
using namespace std;
int a[200005];
void solve(){
	memset(a,0,sizeof(a));
	int n,x=0,y=0,q,w;
	string s;
	cin>>n;
	cin>>s;
	for(int i=0;i<n;i++){
		if(s[i]=='N')y++;
		if(s[i]=='S')y--;
		if(s[i]=='E')x++;
		if(s[i]=='W')x++;
	}
	if(x%2!=0||y%2!=0)cout<<"NO";
	else{
		q=x/2;
		w=y/2;
		for(int i=0;i<n;i++){
			switch(s[i]){
				case 'N':
			}
		}
	}
}
int main(){
	int t;
	cin>>t;
	while(t--){
		solve();
		cout<<endl;
	}
} 
