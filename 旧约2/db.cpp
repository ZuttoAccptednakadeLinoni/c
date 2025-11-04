#include<bits/stdc++.h>

using namespace std;
int main(){
    int a[100];
    a[0]=1;
    for(int i=1;i<100;i++){
        if(i%3==0){
            a[i]=a[i/3]+1;
            
        }
        else{
            a[i]=a[i-1]+1;
        }
        cout << i <<" "<<a[i] <<endl;
    }
}
