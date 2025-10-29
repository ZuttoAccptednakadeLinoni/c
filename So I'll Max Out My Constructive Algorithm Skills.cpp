#include<bits/stdc++.h>
using namespace std;
int arr[65][65];
void solve(){
	int n;
	cin>>n;
	for(int i=0;i<n;i++){
		for(int j=0;j<n;j++){
			cin>>arr[i][j];
		}
	}
	vector<int>v;
	int num=0;
	int q=arr[0][0];
	for(int i=0;i<n;i++){
		
		if(i%2==0){
			
			for(int j=0;j<n;j++){
				if(arr[i][j]>q)num++;
				v.push_back(arr[i][j]);
				q=arr[i][j];
			}
		}else{
			for(int j=n-1;j>=0;j--){
				if(arr[i][j]>q)num++;
				v.push_back(arr[i][j]);
				
				q=arr[i][j];
			}
		}	
	}
	if(num>n*n-1-num){
		cout<<v[v.size()-1];
		for(int i=v.size()-2;i>=0;i--){
			cout<<" "<<v[i];
		}
	}else{
		cout<<v[0];
		for(int i=1;i<v.size();i++){
			cout<<" "<<v[i];
		}
	}
	cout<<endl;
}

int main(){
	int t;
	cin>>t;
	while(t--)solve();
}
