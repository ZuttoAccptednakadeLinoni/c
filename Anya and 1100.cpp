#include<bits/stdc++.h>
using namespace std;
int arrq[200005],arrh[200005];
void solve(){
	string arr;
	cin>>arr;
	int num=0;
	for(int i=0;i<arr.size()-3;i++){
		if(arr[i]=='1'&&arr[i+1]=='1'&&arr[i+2]=='0'&&arr[i+3]=='0')num++;
	}
	int q;
	cin>>q;
	int w;char e;
	while(q--){
		cin>>w>>e;
		if(arr[w-1]!=e){
			for(int i=w-4;i<=w-1;i++){
			if(arr[i]=='1'&&arr[i+1]=='1'&&arr[i+2]=='0'&&arr[i+3]=='0')num--;
			}	
			arr[w-1]=e;
			for(int i=w-4;i<=w-1;i++){
			if(arr[i]=='1'&&arr[i+1]=='1'&&arr[i+2]=='0'&&arr[i+3]=='0')num++;
			}
		}
		if(num)cout<<"YES\n";
		else cout<<"NO\n";
	}
}


int main(){
	int t;
	cin>>t;
	while(t--)solve();
}
