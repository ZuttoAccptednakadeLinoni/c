#include<bits/stdc++.h>
#define int long long
using namespace std;
/*1 1 1
-> 35024 29500*/
void solve(){
	int q,n;
	cin>>q>>n;
	for(int i=0;i<n;i++){
		string s;
		cin>>s;
		if(s=="->"){
			int a,b;
			cin>>a>>b;
			a--,b--;
			long long ans=1;
			for(int i=30;i>=0;i--){
				q=0;
				int z=0,y=0;
				z=(a>>(i));
				q+=z*2;
				a-=(z<<i);
				y=(b>>(i));
				q+=y;
				b-=(y<<(i));
			//	cout<<q<<" ";
				if(q==0){
				//	ans+=(0<<(i*2));
				}else if(q==1){
				//	cout<<i<<endl;
					ans+=(1ll<<(i*2));
					ans+=(1ll<<(i*2+1));
				//	cout<<ans<<endl; 
				}else if(q==2){
					ans+=(1ll<<(i*2+1));
				//	cout<<"22 "<<(1<<(i*2+1))<<endl;
				}else if(q==3){
					ans+=(1ll<<(i*2));
				//	cout<<"33 "<<(1<<(i*2))<<endl;
				}
			}
			cout<<ans<<endl;
		}else{
			int a;
			cin>>a;
			a -= 1;
			int ansx=1,ansy=1;
			for(int i=58;i>=0;i-=2){
				//cout<<a<<endl;
				q=a>>i;
				a-=(q<<i);
				//cout<<a<<endl;
				if(q==0){
					ansx+=0;
					ansy+=0;
				}else if(q==1){
					ansx+=(1ll<<(i/2));
					ansy+=(1ll<<(i/2));
				}else if(q==2){
					ansx+=(1ll<<(i/2));
					ansy+=0;
				}else if(q==3){
					ansx+=0;
					ansy+=(1ll<<(i/2));
				}
			}
			cout<<ansx<<" "<<ansy<<endl;
		}
	}
}

signed main(){
	int t;
	cin>>t;
	while(t--)solve();
}
