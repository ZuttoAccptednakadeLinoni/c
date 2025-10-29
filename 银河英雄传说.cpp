#include<bits/stdc++.h>
using namespace std;
int f[30000],s[30000],b[30000];

int find(int o){
	if(f[o]==o)return o;
	int k=f[o];
	f[o]=find(f[o]);
	s[o]+=s[k];
	b[o]=b[f[o]];
	return f[o];
}

int main(){
	int n;
	cin>>n;
	for(int i=1;i<=30000;i++){
		f[i]=i;
		s[i]=0;
		b[i]=1;
	}
	for(int i=1;i<=n;i++){
		char c;
		int x,y,dx,dy;
		cin>>c>>x>>y;
		if(c=='M'){
			dx=find(x);
			dy=find(y);
			f[dx]=dy;
			s[dx]+=b[dy];
			b[dx]+=b[dy];
			b[dy]=b[dx];
		}if(c=='C'){
			dx=find(x);
			dy=find(y);
			if(dx!=dy){
				cout<<-1<<endl;
				continue;
			}else cout<<abs(s[x]-s[y])-1<<endl;
		}
	}
}
