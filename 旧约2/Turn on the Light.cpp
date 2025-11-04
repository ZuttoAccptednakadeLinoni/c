#include<bits/stdc++.h>
using namespace std;

void solve(){
	int n;
	cin>>n;
	int i=1,j=n;
	cout<<"? "<<i<<endl;;
	int q;
	cin>>q;
	if(q==0){
		cout<<"! "<<i<<endl;
		return ;
	}
	i++;
	while(i<=j){
		int m=(i+j)/2;
		cout<<"? "<<m<<endl;
		cin>>q;
		if(q==0){
			cout<<"? "<<i<<endl;
			
			j=m-1;
			cin>>q;
			if(q==0){
				cout<<"! "<<i<<endl;
				return ;
			}
			i++;
		}else if(q==1){
			cout<<"! "<<m<<endl;
			return ;
		}else if(q==2){
			cout<<"? "<<j<<endl;
			i=m+1;
			cin>>q;
			if(q==2){
				cout<<"! "<<j<<endl;
				return ;
			}
			j--;
		}
	}
}

int main(){
	int t=1;

	while(t--)solve();
	
} 
