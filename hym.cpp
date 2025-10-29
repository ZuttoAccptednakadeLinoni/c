#include <bits/stdc++.h>
using namespace std;
#define int long long
int a[100009];
int n;
void move(int pos){
	if(pos==n)return;
	int tmp=a[pos]+1;
	for (int i=pos;i<n;i++){
		a[i]=a[i+1];
	}
	a[n]=tmp;
}
int m_min;
int m_pos;
main(){
	int total;
	cin>>total;
	for (int t=1;t<=total;t++){
		cin>>n;
		for (int i=1;i<=n;i++){
			cin>>a[i];
		}
		int flag=1;
		int flag2;
		while(flag){
			m_min=0x7fffffff;
			m_pos=0;
			flag=0;
			for (int i=1;i<n;i++){
				flag2=0;
				for (int j=i;j<=n;j++){
					if(a[j]<a[i]) flag2=1;
				}
				if(flag2){
					if(a[i]<m_min){
						m_min=a[i];
						m_pos=i;
					}
					flag=1;
				}
			}
			if(flag){
				//cout<<m_min<<endl; 
				move(m_pos);
			}
		}
		for (int i=1;i<=n;i++){
			cout<<a[i]<<" ";
		}
		cout<<"\n";
	}
	return 0;
}
