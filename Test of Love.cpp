#include<bits/stdc++.h>
using namespace std;
char arr[200005];
void solve(){
	int n,m,k;
	cin>>n>>m>>k;
	for(int i=1;i<=n;i++){
		cin>>arr[i];
	}
	arr[0]='L';
	arr[n+1]='L';
	int q=0;
	int e=0;
	while(q<=n){
		
		if(arr[q]=='L'){
			int w=0;
			for(int i=q+m;i>q;i--){
				if(i>n){
					cout<<"YES\n";
					return;
				}
				if(arr[i]=='L'){
					q=i;break;
				}
				else if(arr[i]=='W')w=max(w,i);
				if(i==q+1){
					if(w==0){
						cout<<"NO"<<endl;
						return;
					}else {
					q=w;
				}
				}
			}
		}else{
			e++;q++;
			if(e>k||arr[q]=='C'){
				cout<<"NO"<<endl;return;
			}
		}
	}
	cout<<"YES\n";
}

int main(){
	int t;
	cin>>t;
	while(t--)solve();
}
