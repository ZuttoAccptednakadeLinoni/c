#include<bits/stdc++.h>
using namespace std;
int arr1[105],arr2[105];
int main(){
	int t,a,q,w,a1,a2;
	cin>>t;
	while(t--){
		a1=0;a2=0;
		cin>>a;
		for(int i=0;i<a;i++){
			cin>>arr1[i];
			arr2[i]=arr1[i];
		}
		sort(arr1,arr1+a);
		if(arr1[0]!=arr1[1]){
			q=arr1[0];
		}else q=arr1[a-1];
		for(int i=0;i<a;i++){
			if(arr2[i]==q){
				cout<<i+1 <<endl;
				break;
			}
		}
	}
}
