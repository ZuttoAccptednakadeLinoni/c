#include<bits/stdc++.h>
using namespace std;

int main()
{
	int sx=15*233333,sy=17*343720,t,i;
	double s,k1,k2;
	if(sx<sy) t=sx;
	for(i=sx;i>0;i--)
	{
		if(sx%i==0&&sy%i==0)
		break;
	}
	k1=sx/i,k2=sy/i;
	cout<<k1*2<<" "<<k2*2<<endl;
	s=sqrt((k1*2*343720)*(k1*2*343720)+(k2*2*233333)*(k2*2*233333));
	printf("%.2lf",s);
 } 


