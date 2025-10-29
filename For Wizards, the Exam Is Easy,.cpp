#include<bits/stdc++.h>
using namespace std;
int arr[20005];
void solve(){
	int n;
	cin>>n;
	for(int i=0;i<n;i++){
		cin>>arr[i];
	}
	int max=0,ar=0,al=0;
	for(int i=0;i<n;i++){
		int num=0;
		for(int j=i+1;j<n;j++){
			if(arr[j]<arr[i])num++;
			else if(arr[j]>arr[i])num--;
			if(num>max){
				max=num;
				ar=i;
				al=j;
			}
		}
		
	}
	cout<<ar+1<<" "<<al+1<<endl;
}

int main(){
	int t;
	cin>>t;
	while(t--)solve();
} 
