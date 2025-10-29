#include<bits/stdc++.h>
using namespace std;
#include <string.h>
#include <stdbool.h>
struct student{
    string name;
    int nian;
    int yue;
    int ri;
    int num;
}stu[100];
bool cmp(student a, student b){
    if (a.nian>b.nian) return 1;
    else if(a.nian<b.nian ) return 0;
    else{
        if(a.yue>b.yue ) return 1;
        else if(a.yue<b.yue) return 0;
        else{
            if(a.ri>b.ri) return 1;
            else if(a.ri<b.ri)return 0;
            else{
                if (a.num>b.num) return 1;
                else return 0;
            }
        }
    }
}
int main() {
    int n;
    cin >> n ;
    for (int i=0; i<n; i++){
        cin >> stu[i].name >> stu[i].nian >> stu[i].yue >> stu[i].ri ;
    }
    for (int i=0; i<n; i++){
        stu[i].num=i+1;
    }
    sort(stu,stu+n,cmp);
    for (int i=0; i<n; i++){
        cout << stu[i].name << endl;
    }
    return 0;  
}
