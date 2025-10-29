#include<bits/stdc++.h>
using namespace std;

void solve(){
	int nn,m,q,n,y=0;
	cin>>nn>>m;
	n=nn;
	priority_queue<int,vector<int>,greater<int>>mq;
	priority_queue<int,vector<int>,greater<int>>yq;
	if(!mq.empty())mq.pop();
	if(!yq.empty())yq.pop();
	for(int i=0;i<nn;i++){
		cin>>q;
		if(q==1)y++;         
		else mq.push(q-1);
	}
	for(int i=0;i<m;i++){
		cin>>q;
		yq.push(q);
	}
	int zs=y;
	if(y>1)n-=(y-1);
//	cout<<n<<endl;
	while(!yq.empty()){
		while(!mq.empty()&&mq.top()<=zs){
		//	cout<<mq.top()<<" ";
			mq.pop();
			zs++;
		}
	//	cout<<"zs"<<zs<<endl;
		int no=yq.top();
		yq.pop();
	//	cout<<"no"<<no<<endl;
		if(no<=zs+n){
			n-=max(no-zs,0);
			zs++;
		}else {
			cout<<"No\n";
			return;
		}
	//	cout<<"n"<<n<<endl;
	}
	cout<<"Yes\n";
}
/*
3
3 2
1 1 4
2 6
3 2
1 1 4
2 7
2 1
100 100
2
*/
/*
3
7 1
1 1 1 1 1 1 1
9
5 2
3 4 5 6 7
1 6
5 3
3 4 5 6 7
1 5 7
*/
int main(){
	int t;
	cin>>t;
	while(t--)solve();
}
