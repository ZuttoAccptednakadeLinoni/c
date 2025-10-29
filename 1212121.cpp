#include <bits/stdc++.h>
using namespace std;
int t;
int a[110],b[110];
int f[110];
int main(){
    cout << 1 <<endl;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        
        int cnt=0;
        
        for(int i=1;i<=n;i++){
            
            cin>>f[i];
        }
        cout <<1<< endl; 
        int i=1;
        while(i<=n){ 
            if(f[i]==i){
                i++;
            }
            else{
                for(int j=n;j>i;j--){
                    if(f[i]>f[j]){
                        cnt++;
                        a[cnt]=i;
                        b[cnt]=j;
                        sort(a+i,a+j+1);
                        
                        break;
                    }
                }
            }
            i+=2;
        }
        cout << cnt << endl;
        for(int l=1;l<=cnt;l++){
            cout << a[l] << " " << b[l] << endl;
        }
    }
}
