#include<bits/stdc++.h>
using namespace std;



int main(){
	int n;
	cin>>n;
	int q;
	stack<int>w,e;
	int ans=0;
	int num=0;
	for(int i=0;i<n;i++){
		cin>>q;
		if(w.empty()||w.top()>q){
			w.push(q);
		}else if(e.empty()||e.top()<q){
			e.push(q);
		}else{
			ans=max(ans,(int)w.size());
			while(!w.empty()){
				w.pop();
			}
			num++;
			while(!e.empty()&&e.top()>q){
				int r=e.top();
				w.push(r);
				e.pop();
			}
			w.push(q);
		}
	}
	ans=max(ans,(int)w.size());
	while(!w.empty()){
				w.pop();
			}
			num++;
	while(!e.empty()){
		ans=max(ans,(int)w.size());
		while(!w.empty()){
				w.pop();
			}
			num++;
			while(!e.empty()){
				int r=e.top();
				w.push(r);
				e.pop();
			}
		}
		cout<<num<<" "<<ans;
}
