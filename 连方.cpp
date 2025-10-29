//
// Created by k0itoYuu on 2025/9/17.
//
#include<bits/stdc++.h>
using namespace std;
char arr[10][200005];
void solve(){
    int n;
    cin>>n;
    for(int i=1;i<=n;i++){
        char c;
        cin>>c;
        arr[1][i]=c;
    }
    for(int i=1;i<=n;i++){
        char c;
        cin>>c;
        arr[7][i]=c;
    }
    bool a=0,b=0;
    for(int i=1;i<=n;i++){
        if(arr[1][i]=='.')a=1;
        if(arr[7][i]=='.')b=1;
    }
    //cout<<"a^b"<<(a^b)<<endl;
    if(!(a^b)){
        if(!a&&!b){
            cout<<"Yes\n";
            for(int i=1;i<=7;i++){
                for(int j=1;j<=n;j++){
                    cout<<"#";
                }
                cout<<endl;
            }
            return;
        }

    }else{
        cout<<"No\n";
        return;
    }
    cout<<"Yes\n";
    for(int i=1;i<=n;i++){
        arr[2][i]='.';
        arr[6][i]='.';
        if(i%2==1){
            arr[3][i]='#';
            arr[4][i]='.';
            arr[5][i]='#';
        }else{
            arr[3][i]='.';
            arr[4][i]='#';
            arr[5][i]='.';
        }
    }
    int aa=0,bb=0,cc=0,dd=0,ee=0,ff=0;
    for(int i=1;i<=7;i++)arr[i][n+1]=0;
    for(int i=1;i<=n;i++){
        if(arr[1][i]=='.')continue;
        else{
            int b=i;

            //cout<<b<<endl;
            while(arr[1][i]=='#'&&i<=n)i++;
            if(i>n)ee=b;
            if(i!=n+1)arr[2][i]='#';
            else if(arr[2][b-1]=='#')continue;
            else if(arr[2][b-2]=='#'){
                if(b%2==1){
                    aa=b;
                    arr[2][b-1]='#';
                    arr[3][b-1]='#';
                    arr[4][b-1]='.';
                    arr[3][b]='.';
                    arr[3][b+1]='#';
                    arr[4][b]='#';
                    if(arr[4][b+1]=='#')arr[4][b+1]='.';
                }else{
                    cc=b;
                    for(int j=b;j<=n;j++)arr[2][j]='#';
                    for(int j=b;j<=n;j++)arr[3][j]='.';
                }
            }else arr[2][b-1]='#';
        }
    }

    for(int i=1;i<=n;i++){
        if(arr[7][i]=='.')continue;
        else{
            int b=i;

            //cout<<b<<endl;
            while(arr[7][i]=='#'&&i<=n)i++;
            if(i>n)ff=b;
            if(i!=n+1)arr[6][i]='#';
            else if(arr[6][b-1]=='#')continue;
            else if(arr[6][b-2]=='#'){
                //cout<<"!\n";
                if(b%2==1){
                    bb=b;
                    arr[6][b-1]='#';
                    arr[5][b-1]='#';
                    arr[4][b-1]='.';
                    arr[5][b]='.';
                    arr[5][b+1]='#';
                    arr[4][b]='#';
                    if(arr[4][b+1]=='#')arr[4][b+1]='.';
                }else{
                    dd=b;
                    for(int j=b;j<=n;j++)arr[6][j]='#';
                    for(int j=b;j<=n;j++)arr[5][j]='.';
                }

            }else arr[6][b-1]='#';
        }
    }
    if(aa&&bb){
        for(int i=2;i<=6;i++){
            for(int j=min(aa,bb);j<=n;j++){
                arr[i][j]='.';
            }
        }
        if(max(aa,bb)-min(aa,bb)==2){
            if(aa<=bb){
                for(int i=4;i<=6;i++){
                    for(int j=max(aa,bb)-2;j<max(aa,bb);j++){
                        arr[i][j]='#';
                    }
                }
            }else{
                for(int i=2;i<=4;i++){
                    for(int j=max(aa,bb)-2;j<max(aa,bb);j++){
                        arr[i][j]='#';
                    }
                }
            }
        }else{
            if(aa<=bb){
                for(int i=5;i<=6;i++){
                    for(int j=max(aa,bb)-2;j<max(aa,bb);j++){
                        arr[i][j]='#';
                    }
                }
            }else{
                for(int i=2;i<=3;i++){
                    for(int j=max(aa,bb)-2;j<max(aa,bb);j++){
                        arr[i][j]='#';
                    }
                }
            }
            for(int i=min(aa,bb);i<=max(aa,bb)-3;i++){
                arr[4][i]='#';
            }
        }

    }
    if(cc&&dd){
        for(int i=max(cc,dd);i<=n;i++){
            arr[4][i]='#';
        }
    }
    //cout<<ee<< " "<<ff<<endl;
    if(ee&&ff){
        for(int j=3;j<=5;j++){
            for(int i=(max(ee,ff)+1);i<=n;i++){
                arr[j][i]='.';
            }
        }
    }

    //cout<<2<<endl;
    for(int i=1;i<=7;i++){
        for(int j=1;j<=n;j++){
            cout<<arr[i][j];
        }
        cout<<endl;
    }
}


int main(){
    int t;
    cin>>t;
    while(t--){

        solve();
    }
}
/*
4
4
#..#
.##.
5
##.#.
.#.##
6
######
.####.
27
.######.######.####.#.#####
.####...####..#.......#####
1 10

##..######

########..
*/