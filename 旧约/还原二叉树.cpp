#include<bits/stdc++.h>
using namespace std;



int dfs(char *pre, char *in,int n){
    if(n==0)return 0;
    int i;
    for(i=0;i<n;i++)
    if(in[i]==pre[0])break;
    int left=dfs(pre+1,in,i);
    int right=dfs(pre+i+1,in+i+1,n-i-1);
    return max(left,right)+1;
}
void solve(){
	int n;
    scanf("%d",&n);
    char pre[n+1],in[n+1];
    scanf("%s%s",pre,in);
    printf("%d\n",dfs(pre,in,n));
}
int main(){
    int t;
    cin>>t;
    while(t--)solve();
    return 0;
}
