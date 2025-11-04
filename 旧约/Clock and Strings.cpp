#include<iostream>
#include<algorithm>
using namespace std;
struct qqq{
	int a,num;
}arr[5]; 
bool cmp_score(qqq x,qqq y){
	return x.a > y.a;
}
void solve(){
	int a,b,c,d;
	cin>>a>>b>>c>>d;
		arr[0]={a,0};
		arr[1]={b,0};
		arr[2]={c,1};
		arr[3]={d,1};
		sort(arr,arr+4,cmp_score);
		for(int i=0;i<=2;i++){
			if(arr[i].num==arr[i+1].num){
				cout<<"NO\n";
				return;
			}
		}
		cout<<"YES\n";
		return;
}
int main(){
	int t;
	int a,b,c,d;
	cin>>t;
	while(t--){
		solve();
		
	}
}
