#include<bits/stdc++.h>
using namespace std;
int arr[5005]; 
void solve(){
	int n;
	cin>>n;
	int f=1,num;
	for(int i=1;i<=n;i++){
		cin>>arr[i];
		if(arr[i]==0){
			f=0;
			arr[i]=0;
		}else{
			arr[i]=1;
		}
	}
	int q=0,t=0;
	if(f){
		cout<<1<<endl;
		cout<<1<<" "<<n<<endl;
	}else{
		if(n>4){
			for(int i=4;i<=n;i++){
				q+=arr[i];
			}
			if(q==n-4+1)q=0;
			else q=1;
//			cout<<"q"<<q<<endl;
			cout<<4<<endl;
			cout<<4<<" "<<n<<endl;
		}else {
			cout<<3<<endl;
			q=arr[4];
		}
		for(int i=1;i<=3;i++){
			t*=2;
			t=(t+arr[i]);
		}
//		cout<<t<<endl;
		if(t==0){	
				cout<<"1 2\n2 3\n1 2\n";
		}else if(t==1){
			if(q==1){
				cout<<"2 3\n1 2\n1 2\n";
			}else{
				cout<<"1 2\n2 3\n1 2\n";
			}
		}else if(t==2){
			cout<<"1 2\n2 3\n1 2\n";
		}else if(t==3){
			if(q==1)cout<<"2 3\n1 2\n1 2\n";
			else cout<<"1 2\n2 3\n1 2\n";
		}else if(t==4){
			cout<<"1 2\n2 3\n1 2\n";
		}else if(t==5){
			if(q==1){
				cout<<"3 4\n2 3\n1 2\n";
			}else{
				cout<<"1 2\n2 3\n1 2\n";
			}
		}else if(t==6){
			if(q==1)cout<<"1 2\n1 2\n1 2\n";
			else cout<<"2 3\n2 3\n1 2\n";
		}else if(t==7){
			cout<<"2 3\n2 3\n1 2\n";
		}
	}
}

int main(){
	int r;
	cin>>r;
	while(r--)solve();
}
