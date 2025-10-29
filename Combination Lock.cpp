#include<bits/stdc++.h>
using namespace std;
int arr[200005];
void solve(){
	int n;
	cin>>n;
	if(n%2==0)cout<<-1<<endl;
	else{
		int num=n;
		for(int i=n;i>=1;i-=2){
			arr[i]=num;
			num--;
		}
		for(int i=n-1;i>=2;i-=2){
			arr[i]=num;
			num--;
		}
		for(int i=1;i<=n;i++){
			cout<<arr[i]<<" ";
		}
		cout<<endl;
	}
}

int main(){
	int t;
	cin>>t;
	while(t--)solve();
}
