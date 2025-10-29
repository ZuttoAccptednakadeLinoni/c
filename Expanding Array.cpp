#include <bits/stdc++.h>
#define int long long
using namespace std;
void solve(){
    string s;
    cin>>s;
    if(s[0]=='-'){
        cout << "No"<<endl;
        return;
    }
    bool f=0;
    for(int i=0;i<s.size();i++){
    	if(s[i]=='-')f=1;
	}
	if(f==0){
		cout<<"No\n";
		return;
	}
	int j;
    for(int i=s.size()-1;i>0;i--){
        if(s[i]=='-'){
            if(s.size()-i<=3){
            	cout<<"No"<<endl;
            	return;
			}else {
				j=i+1;
				break;
			}
        }
    }
    vector<pair<int,int> >v;

    for(int i=s.size()-3;i>=j;i--){
    	v.push_back(make_pair(1,i+3));
	}
    for(int i=1;i<j;i++){
        if(s[i]=='>'){
            v.push_back(make_pair(i+1,j+2-i+1));
        }
    }
    cout << "Yes "<<v.size()<<endl;
    for(int i=0;i<v.size();i++){
        cout << v[i].first<<" "<<v[i].second<<endl;
    }
}
signed main(){
    int t;
    cin>>t;
    while(t--){
        solve();
    }
}
