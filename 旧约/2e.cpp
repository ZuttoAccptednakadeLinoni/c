#include <bits/stdc++.h>
using namespace std;
int Power(long long n){
    int flag=1;
    while(n>1){
        if(n%2==1){
            flag=0;
            break;
        }
        n/=2;
    }
    return flag;
}
int main(){
 
    int t;
    cin>>t;
    while(t--){
        long long n;
        cin>>n;
        if(n==1){
            cout <<-1<<endl;
        }
        else if(n%2==1){
            cout << n-1<<endl;
        }
        else{
            if(Power(n)){
                cout <<-1<<endl;
            }
            else{
                int m=2;
                while(n%m==0){
                    m*=2;
                }
                m/=2;
                cout <<n-m<<endl;
            }
        }
    }
}
