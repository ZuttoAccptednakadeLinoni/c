#include<bits/stdc++.h>
using namespace std;
#define pp pair<int,int>
pp ans;

int main(){
	int a,b,c;
	cin>>a>>b>>c;
	int ca=INT_MAX;
	for(int i=1;i<c;i++){
		if((a%i==0)&&(b%(c-i)==0)){
			if(a/i==1||b/(c-i)==1)continue;
			if(i-(c-i)<ca){
				ca=i-(c-i);
				ans={i,c-i};
			}
		}
	}
	if(ca==INT_MAX)cout<<"No Solution";
	else cout<<ans.first<<" "<<ans.second;
}
