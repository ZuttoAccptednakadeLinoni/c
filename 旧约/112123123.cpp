#include<bits/stdc++.h>
using namespace std;
struct student{
    int number;
    int literature;
    int math;
    int English;
    int score;
}stu[310][4]; 
bool cmp(student a,student b){
    if(a.score!=b.score){
        return a.score>b.score;
    }else if(a.literature!=b.literature){
        return a.literature>b.literature;
    }else{
        return a.literature<b.literature;
    }
         
}
int main(){
    int n;
    cin>>n;
    for(int i=0;i<n;i++){
        stu[i][0].number=i+1;
        cin>>stu[i][1].literature>>stu[i][2].math>>stu[i][3].English;
        stu[i][4].score=stu[i][1].literature+stu[i][2].math+stu[i][3].English;
    }
    
    sort(stu,stu+n,cmp);
    for(int i=0;i<5;i++){
        cout<<stu[i][0].number<<" "<<stu[i][4].score<<endl;
    }
    return 0;
    
}
