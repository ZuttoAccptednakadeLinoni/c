#include<bits/stdc++.h>
using namespace std;
#define pp pair<int,int>

struct an{
	int o,i,z;
};
bool cmp(an a,an b){
	if(a.i!=b.i)return a.i<b.i;
	return a.o<b.o;
}
int main(){
	int n;
	cin>>n;
	int q,w;
	map<int,int>mz;
	map<int,int>mi;
	map<int,int>mo;
	for(int i=0;i<n;i++){
		cin>>q>>w;
		if(w==0)mo[q]++;
		else if(w==1)mi[q]++;
		else if(w==2)mz[q]++;
	}
	vector<an>v;
	for(auto o:mo){
	//	int f=1;
		for(auto i:mi){
			for(auto z :mz){
			//	cout<<o.first<<" "<<i.first<<" "<<z.first<<endl;
				if(o.first==i.first&&o.first==z.first){
					v.push_back({o.first,i.first,z.first});
					break;
				}else if(o.first-i.first==i.first-z.first){
					v.push_back({o.first,i.first,z.first});
					break;
				}
			}
		}
	}
	if(v.empty()){
		cout<<-1;
	}else{
		sort(v.begin(),v.end(),cmp);
		for(int i=0;i<v.size();i++){
			cout<<"["<<v[i].o<<", 0] ["<<v[i].i<<", 1] ["<<v[i].z<<", 2]\n";
		}
	}
}
