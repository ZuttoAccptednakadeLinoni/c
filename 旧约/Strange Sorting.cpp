#include<bits/stdc++.h>
using namespace std;

int a[105],b[105];
int n;
inline int read()
{
    int x=0,f=1;
    char ch=getchar();
    while(ch<'0'||ch>'9')
    {
        if(ch=='-')
            f=-1;
        ch=getchar();
    }
    while(ch>='0' && ch<='9')
        x=x*10+ch-'0',ch=getchar();
    return x*f;
}
void solve(){ 
	vector<pair<int,int>>v;
	n=read();
	for(int i=1;i<=n;i++){
		a[i]=read();;
		b[i]=a[i];
	}
	sort(b+1,b+n+1);
	int i=1;
	while(i<=n){
		if(a[i]==b[i]){
			i++;
			continue;
		}else{
			int q=0,w=0;
			for(int j=i;j<=n;j++){
				if(a[j]==b[i]){
					q=j;
				}
				if(a[j]==b[i]+1){
					w=j;
				}
				if(w&&q){
					sort(a,a+max(w,q)+1);
					v.push_back({i,j});
					
					i=b[i]+2;
					break;
				}
			}
		}
	}
	cout<<v.size()<<endl;
	for(auto u:v){
		cout<<u.first<<" "<<u.second<<endl;
	}
}
/*
1
8
1 2 4 5 3 7 8 6
*/

int main(){
	int t;
	cin>>t;
	while(t--)solve();
}
