#include<bits/stdc++.h>
#define int long long
using namespace std;

int arr[1000005];

signed main(){
	int n;
	vector<int>v;
	cin>>n;
//	cout<<(long long)(50000+1)*50000/2<<endl;
//	cout<<(1ll<<31)<<endl;
	for(int i=1;i<1000001;i++){
		arr[i]=i*i;
	}
	int ans=0;int tim=2,mm;
	for(int i=sqrt(n-1);i<10000001;i++){
		if((1+i)*i/2==n)ans=1;
		if((1+i)*i/2>=n)break;
		cout<<i<<endl;
	}
	int sss=0;
	for(int i=2;i<31;i++){
		int sum=0;int t=1;
		int h=0;
		while(sum<n){
			sum+=arr[t];
		//	cout<<sum<<" ";
			if(sum==n){
			//	cout<<tim<<" "<<endl;
				ans=max(ans,tim);
				mm=t;
				sss=1;
			}
			arr[t]*=t;
			t++;
			
		}tim++;
	//	cout<<endl;
	}
	if(sss==0){
		cout<<"Impossible for "<<n<<".";
		return 0;
	}
	for(int i=1;i<=mm;i++){
		cout<<i<<"^"<<ans;
		if(i!=mm)cout<<"+";
	}
}
