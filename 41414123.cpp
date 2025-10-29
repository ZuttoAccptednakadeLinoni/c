#include <bits/stdc++.h>
using namespace std;

int main(){
    int a[21][21][21]={0},x,y,z,q,x1,x2,y1,y2,z1,z2;
    cin >> x >> y >> z;
    cin >> q;
    for (int t=1;t<=q;t++){
        cin >> x1 >> y1 >> z1 >> x2 >> y2 >> z2;
        for(int i=min(x1,x2); i<=max(x1,x2); i++){
             for(int j=min(y1,y2); j<=max(y1,y2); j++){
                for(int k=min(z1,z2); k<=max(z1,z2); k++){
                    a[i][j][k]=1;
                }
            }
        }
    }
    int end=x*y*z;
    for (int i=x1; i<=x2; i++){
            for (int j=y1; j<=y2; j++){
                for (int k=z1; k<=z2; k++){
                    if (a[i][j][k]==1) end--;
                }
            }
        }
    cout << end << endl;
    return 0;
}
