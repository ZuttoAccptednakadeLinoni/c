#include<bits/stdc++.h>
using namespace std;
map<int,int>mm;
int pd(int q){
	if(mm[q]){
		mm[q]--;
		return 1;
	}
	if(q==0)return 0;
	return (pd(q/2)&&pd(q-q/2));
}
void solve(){
	int n,m;
	cin>>n>>m;
	mm.clear();
	int q;
	for(int i=0;i<n;i++){
		cin>>q;
		mm[q]++;
	}
	int f=1;
	for(int i=0;i<m;i++){
		cin>>q;
		if(f){
			f=pd(q);
		}else{
			f=0;
		}
	}
	map<int, int>::iterator  it;
	it=mm.begin();
    while(it!=mm.end()){
    	if(it->second!=0){
    		f=0;
    		break;
		}else it++;
	}
    
	if(f)cout<<"YES\n";
	else cout<<"NO\n";
}

int main(){
	int t;
	cin>>t;
	while(t--)solve();
}
