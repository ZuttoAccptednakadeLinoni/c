#include<bits/stdc++.h>
using namespace std;
map<int,int>m;
void ys(int q){
	int num=2;

	while(q>1){
		if(q%num==0){
			while(q%num==0) {
				q/=num;
				m[num]++;
			
			}
			num++;
		}
		else num++;
	}
/*	
for (int i = 2; i <= x / i; i++) {
        if (x % i == 0) {
            for (; x % i == 0; x /= i) m[i]++;
        }
    }
    if (x > 1) m[x]++;
*/
}
void solve(){
	int n,q;
	m.clear();
	cin>>n;
	for(int i=0;i<n;i++){
		cin>>q;
		ys(q);
	}
	int ans=0,w=0;
	for(auto i:m){
		ans+=i.second/2;
		w+=i.second%2;
		if(w==3){
			ans++;
			w=0;
		}
	}
	cout<<ans<<endl;
}

int main(){
	int t;
	cin>>t;
	while(t--)solve();
}
