#include<bits/stdc++.h>
using namespace std;

map<string,vector<string>>m;

int main(){
	int n;
	string s;
	scanf("%d",&n);
	getchar();
	for(int j=0;j<n;j++){
		string f,t;
		getline(cin,s);
		
        stringstream ss(s);
		while(ss>>f)t+=f[0];
		m[t].push_back(s);
	}
	scanf("%d",&n);
	getchar();
//	cout<<n<<endl;
	for(int j=0;j<n;j++){
//		cout<<j<<endl;
		getline(cin,s);
		string f,t;
		stringstream ss(s);
		while(ss>>f)t+=f[0];
		
//		cout<<f<<endl;
		if(m[t].empty())cout<<s<<endl;
		else{
			vector<string>ans=m[t];
			sort(ans.begin(),ans.end());
			cout<<ans[0];
			for(int q=1;q<ans.size();q++){
				cout<<"|"<<ans[q];
			}
			cout<<endl;
//			cout<<j<<endl;
		}
	}
//	cout<<"!!!!"<<endl;
}
