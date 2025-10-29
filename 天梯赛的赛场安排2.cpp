#include<bits/stdc++.h>
using namespace std;

struct pp{
	int scl;
	string n;
	bool operator <(const pp &a)const{
		return scl<a.scl;
	}
};
string scl[5005];
int main(){
	int n,c;
	cin>>n>>c;
	vector<int>v;
	priority_queue<pp>pq;
	map<string,int>m;
	string s;
	int u;
	int ans=0;
	for(int i=0;i<n;i++){
		cin>>s>>u;
		m[s]=u/c;
		if(u%c!=0)pq.push({u%c,s});
		ans+=u/c;
		scl[i]=s;
	}
//	cout<<"!!"<<endl;
	int t;
	while(!pq.empty()){
		s=pq.top().n,t=pq.top().scl;
	//	cout<<s<<" "<<t<<endl;
		pq.pop();
		int sum=0;
			if(v.empty()){
				v.push_back(t);
				t=0;
				sum++;
				ans++;
			}else{
				for(int i=0;i<v.size();i++){
					if(c-v[i]>=t){
						c+=t;
						t=0;
						sum++;
						break;
					}
				}
				if(t!=0){
					v.push_back(t);
					t=0;
					sum++;
					ans++;
				}
			}
			m[s]+=sum;
	//		cout<<s<<" "<<t<<endl;
	}
	for(int i=0;i<n;i++){
		cout<<scl[i]<<" "<<m[scl[i]]<<endl;
	}
	cout<<ans<<endl;
} 
