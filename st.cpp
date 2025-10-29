#include<bits/stdc++.h>
using namespace std;
const int logn=21;
const int maxn=2000001;
int fma1[maxn][logn+1],Logn[maxn+1];
int fmi[maxn][logn+1];

inline int read() {
	int x=0,f=1;
	char ch=getchar();
	while (ch<'0'||ch>'9') {
		if (ch=='-') f=-1;
		ch=getchar();
	}
	while (ch>='0'&&ch<='9') {
		x=x*10+ch-48;
		ch=getchar();
	}
	return x*f;
}


void pre() {
	Logn[1]=0;
	Logn[2]=1;
	for(int i=3; i<maxn; i++) {
		Logn[i]=Logn[i/2]+1;
	}
}
int main() {
	int n = read(), m = read();
	for(int i=1; i<=n; i++) {
		fmi[i][0]=fma1[i][0] = read();
	}
	pre();
	for(int j=1; j<=logn; j++) {
		for(int i=1; i+(1<<j)-1<=n; i++) {
			fma1[i][j]=max(fma1[i][j-1],fma1[i+(1<<(j-1))][j-1]);
			fmi[i][j]=min(fmi[i][j-1],fmi[i+(1<<(j-1))][j-1]);
		}
	}
	for(int i=1; i<=m; i++) {
		int x = read(), y = read();
		int s=Logn[y-x+1];
		printf("%d\n", max(fma1[x][s], fma1[y - (1 << s) + 1][s])-min(fmi[x][s], fmi[y - (1 << s) + 1][s]));
	}
}









