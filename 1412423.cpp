#include<bits/stdc++.h>
using namespace std;
#include <string.h>
#include <stdbool.h>
struct student{
    int shun;
    string name;
    int qimo;
    int banji;
    char ganbu;
    char xibu;
    int lunwen;
    int sum=0;
}stu[1000];
void f1(student a);
bool cmp(student a,student b){
    if (a.sum>b.sum) return 1;
    else if (a.sum<b.sum)return 0;
}
int main() {
    int n,end=0;
    cin >> n;
    for (int i=0;i<n;i++){
        stu[i].shun=i+1;
        cin >> stu[i].name >> stu[i].qimo >> stu[i].banji >> stu[i].ganbu >> stu[i].xibu >> stu[i].lunwen;
        f1(stu[i]);
    }
    sort(stu,stu+n,cmp);
    for (int i=0;i<n;i++){
        end+=stu[i].sum;
    }
    cout << stu[n-1].name << endl;
    cout << stu[n-1].sum << endl;
    cout << end << endl;
    return 0;  
}
void f1(student a){
    if (a.qimo>80 && a.lunwen>1) a.sum+=8000;
    if (a.qimo>85 && a.banji>80) a.sum+=4000;
    if (a.qimo>90 )              a.sum+=2000;
    if (a.qimo>85 && a.xibu=='Y') a.sum+=1000;
    if (a.banji>80 && a.ganbu=='Y') a.sum+=850;
}
