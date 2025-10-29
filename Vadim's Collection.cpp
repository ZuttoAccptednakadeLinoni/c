#include<bits/stdc++.h>
#define int long long
using namespace std;
int arr[10];
void solve(){
	int n;
	cin>>n;
//	cout<<n<<endl;
	for(int i=0;i<10;i++){
		arr[i]=n%10;
		n/=10;
	//	cout<<n%10;
	}
	
}

signed main(){
	int t;
	cin>>t;
	while(t--)solve();
}
