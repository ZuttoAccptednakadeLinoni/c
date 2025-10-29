#include<bits/stdc++.h>
using namespace std;
int arr[100005];
void solve(){
	int n,q;
	cin>>n>>q;
	for(int i=1;i<=n;i++){
		cin>>arr[i];
	}
	int w,e,r;
	for(int i=0;i<q;i++){
		cin>>w;
		for(int j=n-1;j>0;j++){
			w-=j;
			if(w<=0){
				w+=j;
				cout<<w+1<<" "<<n-j;
				cout<<arr[w+1]-arr[n-j]+1<<endl<<"!";
				break;
			}else if(j==1)cout<<0<<endl;
		}
	}
}

int main(){
	int t;
	cin>>t;
	while(t--)solve();
} 
