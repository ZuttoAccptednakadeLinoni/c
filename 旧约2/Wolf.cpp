//
// Created by k0itoYuu on 2025/5/20.
//
#include<bits/stdc++.h>
using namespace std;
int arr[200005];
int ad[200005];
int vis[200005];
void solve(){
    int n,q;
    cin>>n>>q;
    for (int i=1;i<=n;i++){
        cin>>arr[i];
        ad[arr[i]]=i;
    }
    for (int i=0;i<q;i++){
        int l,r,k;int ans=0;
        cin>>l>>r>>k;
        if (ad[k]>r||ad[k]<l){
            cout<<-1<<" ";
            continue;
        }
        int m;
        // for (int j=0;j<=n;j++){
        //     vis[j]=0;
        // }
        vector<int >v;
        v.clear();
        int bi=0,sm=0;
        int bii=0,smm=0;
        while (l<=r){
            m=(l+r)/2;
            //cout<<m<<arr[m]<<endl;
            if (m==ad[k])break;
            if (m>ad[k]){
                r=m-1;
                if (arr[m]>k){
                    vis[arr[m]]=1;
                    bii++;
                }
                else{
                    v.push_back(arr[m]);
                    bi++;
                    ans++;
                }
            }
            if (m<ad[k]){
                l=m+1;
                if (arr[m]<k){
                    vis[arr[m]]=1;
                    smm++;
                }
                else{
                    v.push_back(arr[m]);
                    sm++;
                    ans++;
                }
            }
            //cout<<bi<<"! !"<<sm<<endl;
        }
        //cout<<ans<<endl;
        for (int j=0;j<v.size();j++){
            //cout<<v[j]<<" ";
            if (v[j]>k){
                bi--;
                bii++;
                //cout<<"BII"<<bii<<endl;
                //vis[v[j]]=1;
            }
            if (v[j]<k){
                sm--;
                smm++;
                //vis[v[j]]=1;
            }
        }
        //cout<<endl;
        //cout<<sm<<" "<<k-1-smm<<" "<<bi<<" "<<bii<<endl;
        if (sm<=k-1-smm&&bi<=n-k-bii)cout<<ans+max(sm,0)+max(bi,0)<<" ";
        else  cout<<-1<<" ";
    }
    cout<<endl;
}

int main(){
    int t;
    cin>>t;
    while (t--)solve();
}
/*
1
7 1
3 1 5 2 7 6 4
1 7 3
 */