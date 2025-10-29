#include<cstdio>
#include<iostream>
#include<algorithm>
#include<map>
#include<cstring>
#include<vector>
using namespace std;
const int MX=100010;

int N, K, c;
int ar[MX], w[MX];
map<string,int> mp;
int ans[MX], cnt[MX];
int read()
{
    int r=0, f=1; char ch=getchar();
    while(ch<'0'||ch>'9') {if(ch=='-') f=-1; ch=getchar();}
    while(ch>='0'&&ch<='9') {r=r*10+ch-'0'; ch=getchar();}
    return r*f;
}
struct node
{
    int val, uni, id;
    bool operator < (const node &a)const {return val>a.val;}
}br[MX];
int main()
{
    // freopen("testdata.in","r",stdin);
    N=read(); K=read();
    for(int i=1;i<=K;i++) ar[i]=read();
    sort(ar+1,ar+1+K);
    for(int i=1;i<=N;i++)
    {
        w[i]=read();
        string s; cin >> s;
        if(!mp[s]) mp[s]=++c;
        br[i]=(node){w[i],mp[s],i};
    }
    sort(br+1,br+1+N);
    int now=0;
    for(int i=1;i<=N;i++)
    {   
        auto [val,uni,id]=br[i];
        if(cnt[uni]==ar[1]) ans[id]=now;
        else
        {
            cnt[uni]++;
            now++;
            ans[id]=now;    
            // cout << ans[id] << '\n';
        }
    }
    for(int i=1;i<=N;i++) cout << ans[i] << '\n';
    return (0-0);
}
