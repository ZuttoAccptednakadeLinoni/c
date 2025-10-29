#include<bits/stdc++.h>
using namespace std;

int arr[5005][10005][5005];
int w[10005];
int v[10005];
int main(){
	int n,W,k;
	cin>>n>>W>>k;
	for(int i=0;i<n;i++){
		cin>>w[i]>>v[i];
	}
	for(int i=0;i<n;i++){
		for(int j=0;j<W;j++){
			for(int q=0;q<k;q++){
				arr[i][j][q]=max(arr[i][q][k-1]+v[i],max(arr[i][q-w[i]][k]+v[i],arr[i][q][k]))
			}
		}
	}
	for(int j=0;j<W;j++){
			for(int q=0;q<k;q++){
				ans=max(ans,arr[n-1][j][q]);
			}
		}
		cout<<ans<<endl;
}
