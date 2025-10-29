#include<bits/stdc++.h>
using namespace std;
vector<int>arr[100005];
int main(){
	int t;
	cin>>t;
    for(int i=0;i<t;i++){
        int q,ans=0,a,b,s;
        cin>>q;
        for(int j=0;j<q;j++){
            cin>>a>>b>>s;
            ans+=s;
        }
        cout<<ans<<"\n";
    }
	
}
