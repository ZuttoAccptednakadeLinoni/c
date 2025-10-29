#include<bits/stdc++.h>
using namespace std;
int arr[100005],brr[100005],crr[100005];
bool cmp(int a,int b){
    return arr[a]>arr[b];
}
int main(){
	int t,n;
	cin>>t;
	while(t--){
		cin>>n;
		for(int i=1;i<=n;i++){
			cin>>arr[i];
            brr[i]=i;
		}
		sort(brr+1,brr+n+1,cmp);
        int j,o;
        if(brr[1]%2==1){
            j=n/2+1,o=1;
            for(int i=1;i<=n;i++){
                if(brr[i]%2==1){
                    crr[brr[i]]=j;
                    j++;
                }else{
                    crr[brr[i]]=o;
                    o++;
                }
            }
        }else{
            j=n/2+1,o=1;
            for(int i=1;i<=n;i++){
                if(brr[i]%2==0){
                    crr[brr[i]]=j;
                    j++;
                }else{
                    crr[brr[i]]=o;
                    o++;
                }
            }
        }
        for(int i=1;i<=n;i++)cout<<crr[i]<<" ";
        cout<<endl;
	}
}
