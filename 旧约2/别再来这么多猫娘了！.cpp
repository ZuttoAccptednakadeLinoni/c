#include<bits/stdc++.h>
using namespace std;

string s[100];

int main(){
//	ios::sync_with_stdio(false);
//	cin.tie(nullptr);
//	cout.tie(nullptr);
	int n;
	cin>>n;
	for(int i=0;i<n;i++){
		cin>>s[i];
	}
	int q;
	cin>>q;
	cin.ignore();
	string mn  ;getline(cin,mn);
	int num=0;
	for(int i=0;i<n;i++){
		while(mn.find(s[i])!=-1){
			
			int w=mn.find(s[i]);
			mn.erase(w,s[i].size());
			mn.insert(w,"-_-");
			num++;
		}
	}
	if(num>=q){//cout<<1<<" ";
		cout<<num<<"\n";
		
		cout<<"He Xie Ni Quan Jia!";
	}else{
		while (mn.find("-_-") != -1)
			{
				int t = mn.find("-_-");
				mn.erase(t, 3);
				mn.insert(t, "<censored>");
			}
			cout << mn;

	}
}
