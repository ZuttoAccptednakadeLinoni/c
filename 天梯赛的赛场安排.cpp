#include<bits/stdc++.h>
using namespace std;
#define pp pair<string,int>
struct sc{
	int num;
	string nam;
	int sum=0;
};
int xl[5005];
sc  scl[5005];
bool cmp(int a,int b){
	return scl[a].num>scl[b].num;
}
int main(){
	int n,c;
	cin>>n>>c;
	int t;
	string s;
	deque<int>q;
	vector<pp>v;
	int ans=0;
	for(int i=0;i<n;i++){
		cin>>scl[i].nam>>scl[i].num;
		xl[i]=i;
	}
	sort(xl,xl+n,cmp);
	for(int i=0;i<n;i++){
		s=scl[xl[i]].nam,t=scl[xl[i]].num;
		int sum=0;
		sum+=t/c;
		ans+=t/c;
		t=t%c;
		while(t>0){
			if(q.empty()){
				q.push_back(t);
				t=0;
				sum++;
				ans++;
			}else{
				int w=q.front();
				if(t>=(c-w)){
					t-=(c-w);
					q.pop_front();
					sum++;
				}else{
					w+=t;
					t=0;
					q.pop_front();
					q.push_front(w);
					sum++;
				}
				
			}
		}
		scl[xl[i]].sum=sum;
		
	}
	for(int i=0;i<n;i++){
		cout<<scl[i].nam<<" "<<scl[i].sum<<endl;
	}
	cout<<ans;
}
