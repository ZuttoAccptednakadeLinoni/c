#include<bits/stdc++.h>
using namespace std;

priority_queue<pair<int,pair<int,int>>>p;
struct s{
	int l,x,y;
	friend bool operator<(s a,s b){
        if(a.l!=b.l)return a.l>b.l;
		else if(a.x!=b.x)return a.x>b.x;
		else return a.y>b.y;
    }
};
/*
struct cmp{
	bool operator()(pair<int,pair<int,int>>a,pair<int,pair<int,int>>b){
	if(a.first!=b.first)return a.first<b.first;
	else if(a.second.first!=b.second.first)return a.second.first<b.second.first;
	else return a.second.second<b.second.second;
}
};*/

void solve(){
	int n;
	priority_queue<s>q;
	cin>>n;
	int num=0;
	int x=-1,y=-1;
/*	q.push({2,{1,1}});
	q.push({3,{1,2}});
	q.push({3,{2,1}});
	q.push({6,{1,2}});*/
	int e;
	for(int i=0;i<n;i++){
		cin>>e;
		if(q.empty()||e==0){
			if(x==-1&&y==-1){
				x=0;
				y=0;
				cout<<3*x+1<<" "<<3*y+1<<endl;
			q.push({3*x+1+3*y+2,3*x+1,3*y+2});
			q.push({3*x+2+3*y+1,3*x+2,3*y+1});
			q.push({3*x+2+3*y+2+2,3*x+2,3*y+2});
				
			continue;
			}
			else if(0==y){
				y=x+1;
				x=0;
			}else{
				x++;
				y--;
			}
		cout<<3*x+1<<" "<<3*y+1<<endl;
		q.push({3*x+1+3*y+2,3*x+1,3*y+2});
		q.push({3*x+2+3*y+1,3*x+2,3*y+1});
		q.push({3*x+2+3*y+2+2,3*x+2,3*y+2});
		}else{
			auto t=q.top();
			int a,s,d;
			if(0==y){
				s=x+1;
				a=0;
			}else{
				a=x+1;
				s=y-1;
			}//s=y a=x
			d=t.l;
//			cout<<3*a+1<<" "<<3*s+1<<" "<<d<<"!   ";
			
			if(3*a+1+3*s+1<d){
				cout<<3*a+1<<" "<<3*s+1<<endl;
				y=s;
				x=a;
				q.push({3*x+1+3*y+2,3*x+1,3*y+2});
				q.push({3*x+2+3*y+1,3*x+2,3*y+1});
				q.push({3*x+2+3*y+2+2,3*x+2,3*y+2});
			}else{
				cout<<(t.x)<<" "<<(t.y)<<endl;
				q.pop();
			}
			
		}
	}
}

int main(){
	int t;
	cin>>t;
	while(t--)solve();
}
