#include<bits/stdc++.h>
using namespace std;
string inor,pre;
void solve(string pre,string inor){
	if(pre.empty())return;
	char root=pre[0];
	int k=inor.find(root);
	pre.erase(pre.begin());
	string leftpre=pre.substr(0,k);
	string rightpre=pre.substr(k);	
	string leftinor=inor.substr(0,k);
	string rightinor=inor.substr(k+1);
	solve(leftpre,leftinor);
	solve(rightpre,rightinor);
	cout<<root;
}
int main(){
	cin>>inor>>pre;
	solve(pre,inor);
	cout<<"\n";
}
