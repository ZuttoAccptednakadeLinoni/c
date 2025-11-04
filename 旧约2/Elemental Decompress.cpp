#include<bits/stdc++.h>
using namespace std;
int arr[200005];
int brr[200005];
int crr[200005];
int ansa[200005];
int ansb[200005];
bool cmp(int a,int b){
	return  arr[a]<arr[b];
}
void solve(){
	int n;
	cin>>n;
	int mm=0;
	for(int i=0;i<=200000;i++)brr[i]=0;
	for(int i=0;i<n;i++){
		cin>>arr[i];
		crr[i]=i;
		brr[arr[i]]++;
		mm=max(arr[i],mm);
	}
	sort(crr,crr+n,cmp);
/*	for(int i=0;i<n;i++){
		cout<<arr[crr[i]]<<" ";
	}
*/	int num=0;
	for(int i=1;i<=mm;i++){
		if(brr[i]==0)num+=2;
		if(brr[i]==2)num-=2;
		if(brr[i]>2){
			cout<<"NO\n"; 
			return;
		}
		if(num<0){
			cout<<"NO\n"; 
			return;
		}
	}
	queue<int>q;
	if(num>=0){
		cout<<"YES\n";
		for(int i=1;i<=n;i++){
			if(brr[i]==0){
				q.push(i);
				q.push(i);
			}
		}
		for(int i=0;i<n;i++){
			if(brr[arr[crr[i]]]==1){
				ansa[crr[i]]=arr[crr[i]];
				ansb[crr[i]]=arr[crr[i]];
			}else if(brr[arr[crr[i]]]==2){
				ansa[crr[i]]=arr[crr[i]];
				ansb[crr[i]]=q.front();
				q.pop();
				ansb[crr[i+1]]=arr[crr[i+1]];
				ansa[crr[i+1]]=q.front();
				q.pop();
				i++;
			}
		}
		for(int i=0;i<n;i++){
			cout<<ansa[i]<<" ";
		}
		cout<<endl;
		for(int i=0;i<n;i++){
			cout<<ansb[i]<<" ";
		}
		cout<<endl;
	}
	else{
		cout<<"NO\n";
	}
}

int main(){
	int t;
	cin>>t;
	while(t--)solve();
}
