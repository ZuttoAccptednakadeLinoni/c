//
// Created by k0itoYuu on 2025/9/25.
//
#include<bits/stdc++.h>
using namespace std;
#define pp pair<int,int>
vector<int>arr[200005];

int main(){
    int n,m;
    cin>>n>>m;
    map<int,int>mp;
    int bi=1;
    for(int i=1;i<=n;i++){
        int q;
        cin>>q;
        if(mp.find(q)==mp.end()){
            mp[q]=bi;
            bi++;

        }
        arr[mp[q]].push_back(i);
    }
    map<pp,int>mpp;
    int bb=sqrt(n*n/m);
    for(int i=0;i<m;i++){
        int a,b;
        cin>>a>>b;
        if(mp.find(a)==mp.end()||mp.find(b)==mp.end()){
            cout<<0<<endl;
            continue;
        }int ans=0;
        if(mpp.find({a,b})!=mpp.end()){
            ans=mpp[{a,b}];
            cout<<ans<<endl;
            continue;
        }
        int x=mp[a],y=mp[b];

        if(a==b){
            cout<<(arr[x].size()-1+1)*(arr[x].size()-1)/2<<endl;
            continue;
        }

        if(arr[x].size()<=arr[y].size()){
            int lst=0;
            int sum=0;
            for(auto j:arr[x]){
                int l=lst,r=arr[y].size()-1;
                int q=0;
                if(j<arr[y][lst]){
                    ans+=arr[y].size()-lst;
                    sum+=arr[y].size()-lst;
                    continue;
                }
                while(l<=r){
                    int m=(l+r)/2;
                    if(arr[y][m]<j){
                        l=m+1;
                    }else{
                        r=m-1;
                        lst=m;
                        q=arr[y].size()-m;
                    }
                }
                ans+=q;
                sum+=q;
            }
            if(arr[y].size()>bb&&arr[y].size()>bb)mpp[{a,b}]=sum;
        }else{
            int lst=arr[x].size()-1;
            int sum=0;
            for(int t=arr[y].size()-1;t>=0;t--){
                int j=arr[y][t];
                int l=0,r=lst;
                int q=0;
                if(j>arr[x][lst]){
                    ans+=1+lst;
                    sum+=1+lst;
                    //cout<<ans<<endl;
                    continue;
                }
                while(l<=r){
                    int m=(l+r)/2;
                    if(arr[x][m]<j){
                        l=m+1;q=m+1;
                        lst=m;
                    }else{
                        r=m-1;

                    }
                }
                ans+=q;
                sum+=q;
            }
            if(arr[x].size()>bb&&arr[y].size()>bb)mpp[{a,b}]=sum;
            //cout<<ans<<endl;
        }cout<<ans<<endl;

    }

}
/*
11 3
3 1 4 1 5 9 2 6 5 3 5
3 5
1 3
4 8
*/