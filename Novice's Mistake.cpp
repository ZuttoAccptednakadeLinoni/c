#include<bits/stdc++.h>
using namespace std;
int arrx[10000];
int arry[10000];
int q[10];
void solve(){
	int n=0;string s;
	cin>>s;
	int sa=s.size();
	for(int i=0;i<sa;i++){
		n=n*10+(s[i]-'0');
	}
	string ss;
	int ans=0;
	if(n==100){
		cout<<0<<endl;
		return;
	}
	for(int i=1;i<=10000;i++){
		
		if(i<10){
			ss+=s;
			q[i]=q[i-1]*10+ss[i-1]-'0';
		}
		for(int j=max(1,i*sa-6);j<min(i*sa,10000);j++){
				bool f=0;
				if(sa==1){
					if((n*i-j)%n==0)f=1;
				}else if(sa==2){
					if((n*i-j)%n==0||(n*i-j)%n==(n/10))f=1;
				}
				
				if(f==1){
				if(q[i*sa-j]==(n*i-j)){
					arrx[ans]=i;
					arry[ans]=j;
					ans++;
				}
				}
		}
	}
	cout<<ans<<endl;
	for(int i=0;i<ans;i++){
		cout<<arrx[i]<<" "<<arry[i]<<endl;
	}
}

int main(){
	int t;
	cin>>t;
	while(t--)solve();
}
