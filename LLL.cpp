//
// Created by k0itoYuu on 2025/7/1.
//
#include <iostream>
using namespace std;

typedef unsigned long long ULL;
const int N = 1000010, P = 131;
int n, m;
char s[N];

// p[i]=P^i, h[i]=s[1~i]的hash值
ULL p[N], h[N];

// 预处理 hash函数的前缀和
void init(){
    p[0] = 1, h[0] = 0;
    for(int i = 1; i <= n; i ++){
        p[i] = p[i-1]*P;
        h[i] = h[i-1]*P+s[i];
    }
}
// 计算s[l~r]的 hash值
ULL get(int l, int r){
    //cout<<h[r]-h[l-1]*p[r-l+1]<<endl;
    return h[r]-h[l-1]*p[r-l+1];
}
// 判断两子串是否相同
bool substr(int l1,int r1,int l2,int r2){
    return get(l1, r1) == get(l2, r2);
}

void solve(){
    string ss;
    cin>>ss;n=ss.size();
    for(int  i=1;i<=ss.size();i++){
        s[i]=ss[i-1];
        //cout<<s[i];
    }
    //cout<<endl;
    init();
    int ans=0;

    //cout<<n<<endl;
    for(int i=1;i<ss.size();i++){
        int lz=i,rz=i,ly=i+1,ry=i+1;
        while(lz>=1&&ry<=n){
            if(substr(lz,rz,ly,ry)){

                //cout<<lz<<rz<<ly<<ry<<endl;
                rz=lz-1;ly=ry+1;
                ans++;
            }
            lz--,ry++;
        }
    }
    cout<<ans<<endl;
}

int main(){
    int t;
    cin>>t;
    while(t--)solve();
}