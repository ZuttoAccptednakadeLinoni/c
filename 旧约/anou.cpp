#include<bits/stdc++.h>
using namespace std;
const int MAXN = 5e3+10;
int x,y,p,q;
bool F(int xl,int yl,int xr,int yr,int xc,int yc) {
	while(xc) xc--,xr++;
	while(yc&&(xr+q>yr||!xr)) {
		yc--,yr++;
	}
	while(xr&&yr&&xr+q<yr&&xc+yc<p) {
		yr--,yc++;
	}
	if(xr&&xr+q<yr) {
		return 0;
	}
	return 1;
}
int ot1(int x,int y,int p,int q) {
	if(x<=p) {
		return 1;
	}
	if(y-p-x-q>0) {
		return -1;
	}
	int ans=0,t;
	int cnt=y-x-2*q;
	if(cnt>=0) {
		if(q==0) {
			if(p>=x) {
				return 1;
			} else if(p+p/2>=x) {
				return 5;
			} else {
				return -1;
			}
		} else {
			t=y-p-q;
			if(t<0)t=0;
			ans+=x-p+t;
			if(ans<=p) {
				return 1;
			} else {
				ans-=p;
				p-=cnt;
				if(p%2)p--;
				if(p%2&&ans%2) ans--;
				if(p==0) {
					return -1;
				}
				if(ans%p) {
					ans=ans/p+1;
				} else {
					ans/=p;
				}
			}
			return ans*2+1;
		}
	} else {
		if(q==0&&x==y) {
			if(p==1) {
				if(x==1) {
					return 1;
				} else if(x==2) {
					return 5;
				} else {
					return -1;
				}
			} else {
				if(p%2)p--;
				if(p%2&&x%2)x--;
				return x/(p/2)*2-1;
			}
		}else if(q==0){
			if(y>x){
				if(x==1)return 1;else return -1;
			}else{
				return x+y;
			}
		}
		t=y-p-q;
		if(t<0)t=0;
		ans+=x+t;
		if(ans%p) {
			ans=ans/p+1;
		} else {
			ans/=p;
		}
		ans--;
		return ans*2+1;
	}
}
int ot2(int x,int y,int p,int q) {
	int xl = x,yl = y,xr = 0,yr = 0;
	int xc = 0,yc = 0,cnt = 0;
	bool check = 1;
	int T = 1e9;
	while(T--) {
		while(xc) xc--,xl++;
		while(yc) yc--,yl++;
		if(xl<=p) {
			//cout<<1<<" "<<xl<<" "<<0<<endl;
			if(xl) cnt++;
			xl = 0;
			break;
		}
		while(yl&&xl+q<yl&&xc+yc<p) {
			if(F(xl,yl-1,xr,yr,xc,yc+1)) {
				yl--,yc++;
			} else break;
		}
		while(xl&&xl+q>yl&&xc+yc<p) {
			if(F(xl-1,yl,xr,yr,xc+1,yc)) {
				xl--,xc++;
			} else break;
		}
		if(xl&&xl+q<yl) {
			cnt = -1;
			check = 0;
			break;
		}
		while(xl&&yl&&xc+yc<p-1) {
			if(F(xl-1,yl-1,xr,yr,xc+1,yc+1)) {
				xl--,yl--;
				xc++,yc++;
			} else break;
		}
		while(yl&&xc+yc<p) {
			if(F(xl,yl-1,xr,yr,xc,yc+1)) {
				yl--;
				yc++;
			} else break;
		}
		//cout<<1<<" "<<xc<<" "<<yc<<endl;
		cnt++;
		if(xl==0) {
			break;
		}
		while(xc) xc--,xr++;
		while(yc&&(xr+q>yr||!xr)) {
			yc--,yr++;
		}
		while(xr&&yr&&xr+q<yr&&xc+yc<p) {
			yr--,yc++;
		}
		if(xr&&xr+q<yr) {
			cnt = -1;
			check = 0;
			break;
		}
		cnt++;
		//cout<<2<<" "<<xc<<" "<<yc<<endl;
	}
	//3 5 1 1
	if(xl!=0) cnt=-1;
	return cnt;
}
int main() {
	//int aa = ot2(11,20,6,3);
	cin>>x>>y>>p>>q;
	//int ans2 = ot1(x,y,p,q);
	int ans1 = ot2(x,y,p,q);
	cout<<ans1<<endl;
	/*
	for(int x=1;x<=20;x++){
		for(int y=1;y<=20;y++){
			for(int p=1;p<=20;p++){
				for(int q=1;q<=20;q++){
					//cout<<x<<" "<<y<<" "<<p<<" "<<q<<endl;
					int X = ot1(x,y,p,q),Y = ot2(x,y,p,q);
					if(x==3&&y==5&&p==2&&q==1) continue;
					if(X<Y) continue;
					if(X!=Y&&X!=-1&&Y!=-1){
						cout<<x<<" "<<y<<" "<<p<<" "<<q<<endl;
						cout<<X<<" "<<Y<<endl;
					}
				}
			}
		}
	}*/
}
/*
8 14 4 2
9 7


4 4 3 1
3 5 2 0
2 5 1 1
5 8 4 1
15 19 4 1
10 10 1 0
24 45 21 0
*/
