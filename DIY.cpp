#include<bits/stdc++.h>
using namespace std;
int arr[200005];
void solve(){
	int n,q;
	cin>>n;
	map<int ,int >m;int num=0;
	for(int i=0;i<n;i++){
		cin>>q;
		m[q]++;
		if(m[q]==2){
			arr[num]=q;
			num++;
			m[q]=0;
		}
	}

	if(num<4){
		cout<<"NO\n"<<endl;
		return ;
	}
	cout<<"YES\n";
	sort(arr,arr+num);
	cout<<arr[0]<<" "<<arr[1]<<" "<<arr[0]<<" "<<arr[num-1]<<" ";
	cout<<arr[num-2]<<" "<<arr[1]<<" "<<arr[num-2]<<" "<<arr[num-1]<<"\n";
}

int main(){
	int t;
	cin>>t;
	while(t--)solve();
}
