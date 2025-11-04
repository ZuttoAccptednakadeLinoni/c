//
// Created by k0itoYuu on 2025/9/24.
//
#include<bits/stdc++.h>
using namespace std;

vector<int>arr[200005];
vector<int>ans[200005];
int xz[200005];
int yz[200005];
int main(){
    int n,m;
    cin>>n>>m;
    for(int i=0;i<=n+5;i++){
        arr[i].resize(m+10);
        ans[i].resize(m+10);
    }
//    for(int i=1;i<=n+1;i++){
//        for(int j=1;j<=m+1;j++){
//            cout<<arr[i][j]<<" ";
//        }
//        cout<<endl;
//    }
    //cout<<"!!!"<<endl;
    for(int i=1;i<=m;i++){
        for(int j=0;j<=n;j++){
            if(i+j>m||i+j>n)continue;
            //cout<<i<<" "<<j<<endl;
            int a,b;
            arr[i+1][1]++;
            arr[n-j+2][m-i-j+2]++;
            arr[n+2-j][1]--;
            arr[i+1][m-i-j+2]--;//cout<<a<<b<<endl;

            a=1,b=j+1;

            arr[a][b]++;
            arr[n-j-i+2][m-i+2]++;
            arr[n-i-j+2][b]--;
            arr[a][m+2-i]--;
            //cout<<a<<b<<endl;
            a=j+1,b=i+1;//cout<<a<<b<<endl;

            arr[j+1][i+j+1]++;
            arr[n-i+2][m+2]++;
            arr[j+1][m+2]--;
            arr[n+2-i][i+j+1]--;



            arr[i+j+1][i+1]++;
            arr[n+2][m+2-j]++;
            arr[i+j+1][m+2-j]--;
            arr[n+2][i+1]--;
            //cout<<a<<b<<endl;
        }
    }
//    cout<<"!!!"<<endl;
//    for(int i=1;i<=n+3;i++){
//        for(int j=1;j<=m+3;j++){
//            cout<<arr[i][j]<<" ";
//        }
//        cout<<endl;
//    }
    for(int i=1;i<=n+1;i++){
        for(int j=1;j<=m+1;j++){
            ans[i][j] = ans[i-1][j] + ans[i][ j - 1] - ans[i - 1][j - 1] + arr[i][j];
            cout<<ans[i][j]<<" ";
        }
        cout<<endl;
    }
}