#include<bits/stdc++.h>
using namespace std;
int d,p;
struct jl{
	string name,sf,time;int id;
	bool operator <(const jl a)const{
		if(time!=a.time)return time<a.time;
		else return id<a.id;
	}
};
map<string,int>m;
map<string ,int >y;
int ii;vector<pair<string,string>>ans;
void solve(){
	int t,ss;
	cin>>t>>ss;
	string n,sfz,time;int zk;
	char c;
	int h,s;
	//priority_queue<jl>q;
	vector<jl>q;
	q.clear();
	for(int i=0;i<t;i++){
		cin>>n>>sfz>>zk>>time;
		
		if(sfz.size()!=18)continue;
		int f=1;
		for(int j=0;j<18;j++){
			if(!(sfz[j]>='0'&&sfz[j]<='9'))f=0;
		}
		//cout<<f<<endl;
		if(!f)continue;
		q.push_back({n,sfz,time,i});
		if(zk==1&&!y[n]){
			ans.push_back({n,sfz});
			y[n]=1;
		}
	}
	sort(q.begin(), q.end());//while(!q.empty()&&ss>0)
	for(int i=0;i<q.size();i++){
		if(ss==0)break;
		auto jj = q[i];
		//q.pop();//cout<<jj.name<<" "<<jj.sf<<endl;
		if(m[jj.sf]<=ii){
			cout<<jj.name<<" "<<jj.sf<<endl;
			m[jj.sf]=ii+p+1;
			ss--;
		}
	}
	
}

int main(){
	
	cin>>d>>p;
	for(ii=1;ii<=d;ii++)solve();
	for(int i=0;i<ans.size();i++){
		cout<<ans[i].first<<" "<<ans[i].second;
		
		if(i!=ans.size()-1) cout<<endl;
	}
}
