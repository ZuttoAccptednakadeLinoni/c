//
// Created by k0itoYuu on 2025/8/25.
//
#include<bits/stdc++.h>
using namespace std;
int arr[1000005];
void solve(){
    string s;
    cin>>s;int n=s.size();
    s=" "+s;
    string t;
    cin>>t;

    for(int i=1;i<=n;i++){
        if(s[i]=='1')arr[i]=arr[i-1]+1;
        else arr[i]=arr[i-1]-1;
    }
    queue<int>v;
    int k=0;
    int w=t.size();
    t=" "+t;
    for(int i=1;i<=w;i++){
        if(t[i]!=t[i-1]&&i!=1){
            v.push(k);
            k=0;
        }
            if(t[i]=='1')k++;
            else k--;
    }
    vector<int>ans;
    ans.push_back(0);
    if(v.empty()){
        if((k>0&&arr[n]>=k)||(k<0&&arr[n]<=k)){
            cout<<"Yes\n";

            int nu=0;int a=1*(k>0?1:-1);
            for(int j=1;j<=n;j++){
                if(arr[j]==a&&nu<abs(k)){
                    ans.push_back(j);
                    a+=1*(k>0?1:-1);
                    nu++;
                }
            }
            *(ans.end()-1)=n;
            for(int i=1;i<ans.size();i++){
                for(int j=ans[i-1]+1;j<ans[i];j++){
                    cout<<0;
                }
                cout<<1;
            }
            cout<<endl;
        }else cout<<"No\n";
        return ;
    }
    if(!v.empty()){
        int now=v.front();v.pop();int f=1;
        //cout<<now<<endl;
        for(int i=1;i<=n;i++){
            if(arr[i]==now){
                int a=1*(now>0?1:-1);
                for(int j=1;j<=i;j++){
                    if(arr[j]==a){
                        ans.push_back(j);
                        a+=1*(now>0?1:-1);
                    }
                }
                f=0;
                break;
            }
        }
        if(f){
            cout<<"No\n";
            return;
        }
    }
    //cout<<1<<endl;
    while(!v.empty()){
        int now=v.front();v.pop();
        int b=*(ans.end()-1);
        int bb=arr[b];
        int f=1;
        //cout<<now<<"||"<<b<<endl;
        for(int i=b+1;i<=n;i++){
            if(bb>arr[i-1]&&now>0){
                bb=min(bb,arr[i-1]);
                b=i-1;
            }else if(bb<arr[i-1]&&now<0){
                bb=max(bb,arr[i-1]);
                b=i-1;
            }
            //cout<<bb<<"||"<<i<<endl;
            if(arr[i]==bb+now){
                *(ans.end()-1)=b;
                int a=bb+1*(now>0?1:-1);
                for(int j=b+1;j<=i;j++){
                    if(arr[j]==a){
                        ans.push_back(j);
                        a+=1*(now>0?1:-1);
                    }
                }
                f=0;
                break;
            }
        }
        if(f){
            cout<<"No\n";
            return;
        }
    }
//    cout<<2<<endl;
    int b=*(ans.end()-1);
    int bb=arr[b];
    //cout<<b<<endl;
    for(int i=b+1;i<=n;i++){
        if(bb>arr[i-1]&&k>0){
            bb=min(bb,arr[i-1]);
            b=i-1;
        }else if(bb<arr[i-1]&&k<0){
            bb=max(bb,arr[i-1]);
            b=i-1;
        }
    }
    //cout<<b<<endl;
    *(ans.end()-1)=b;

    int a=bb+1*(k>0?1:-1);
    int nu=0;
    for(int j=b+1;j<=n;j++){
        if(arr[j]==a&&nu<abs(k)){
            ans.push_back(j);
            a+=1*(k>0?1:-1);
            nu++;
        }

    }
    //cout<<bb<<" "<<k<<" "<<arr[n]<<endl;
    if((bb+k<=arr[n]&&k>0)||(bb+k>=arr[n]&&k<0)){

    }else{
        cout<<"No\n";
        return;
    }
    cout<<"Yes\n";
    *(ans.end()-1)=n;
//    for(auto i:ans)cout<<i<<" ";
//    cout<<endl;
    for(int i=1;i<ans.size();i++){
        for(int j=ans[i-1]+1;j<ans[i];j++){
            cout<<0;
        }
        cout<<1;
    }
    cout<<endl;
}

int main(){
    int t;
    cin>>t;
    while(t--)solve();
}
/*
3
1001
0
111
1
011011010011101
110111
*/