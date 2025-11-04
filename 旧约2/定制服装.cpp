#include<bits/stdc++.h>
using namespace std;



int main(){
	int n,k; 
	cin>>n>>k;
	int r=1,l=n*n;
	int x=n*n-k;
	int ans;
	while(r<=l){
		int m=(r+l)/2;
		int j=n;int sm=0;
		for(int i=1;i<=n;i++){
			int fi=1;
			int mm=n;
			int fa=0;
		//	cout<<i<<"!!"<<endl;
			while(j>0){
				cout<<"? "<<i<<" "<<j<<" "<<m<<endl;
				int q;
				cin>>q;
				if(q==1){
					break;
				}else {
					j--;
				}
			}
		//	cout<<"++"<<j<<endl;
			sm+=j;
		//	j=fa;
		}
		//cout<<sm<<endl;
		if(sm<x+1){
			r=m+1;
			
		//	cout<<ans<<' '<<ans<<endl;
		}else{
			l=m-1;ans=m;
		}
	//	cout<<"sm"<<sm<<endl;
	}
	cout<<"! "<<ans<<endl;
}
