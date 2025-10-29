#include <bits/stdc++.h>
using namespace std;
struct student{
    int time;
    int bianhao;
    double dengdai;
}stu[10000];
bool cmp(student a, student b ){
    if (a.time>b.time) return 0;
    else if (a.time==b.time){
        if (a.bianhao>b.bianhao) return 0;
        else return 1;
    }
    else return 1;
}
void f1(student *a,int n);
int main(){
    int n;
    cin >> n;
    for (int i=1; i<=n;i++) stu[i].bianhao=i;
    for (int i=1; i<=n;i++) cin >> stu[i].time;
    sort (stu+1,stu+1+n,cmp);
    for (int i=1; i<=n;i++){
        cout << stu[i].bianhao <<" " ;
    }
    f1(stu,n);
    cout << endl;
    long long int sum=0;
    for (int i=1; i<=n;i++){
        sum+=stu[i].dengdai;
    }
    double average=1.0*sum/n;
    cout << fixed << setprecision(2)<<average << endl;
    return 0;
}
void f1(student *a,int n){
    a[1].dengdai=0.0;
    if (n>=2){
        for (int i=2; i<=n; i++) a[i].dengdai=a[i-1].dengdai+a[i-1].time;
    }
}
