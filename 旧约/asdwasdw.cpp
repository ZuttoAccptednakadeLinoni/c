#include <bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin>>n;
    if(n==1){
        cout << 100;
    }
    else if(n==2){
        cout << 0 <<" "<<100;
    }
    else if(n==3){
        cout << 100 <<" "<<0<<" "<<0;
    }
    else if(n==4){
        cout << 98 << " "<< 0 <<" "<<1<<" "<< 1;
    }
    else{
        cout << 97 << " "<<0<<" "<<1<<" "<<2<<" "<<0;
    }
}
