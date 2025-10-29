#include<bits/stdc++.h>
using namespace std;
typedef int Elemtype;
#define MaxSize 1000
int g[100][100];
int n,m;
typedef struct{
	Elemtype datax[MaxSize];
	Elemtype datay[MaxSize];
	int top;
}SqStack;
int dx[4]={0,1,0,-1};
int dy[4]={1,0,-1,0};
void InitStack(SqStack *&s){
	s=(SqStack *)malloc(sizeof(SqStack));
	s->top=-1;
}
void DestoryStack(SqStack *&s){
	free(s);
}

bool StackEmpty(SqStack * s){
	return(s->top==-1);
}

bool Push(SqStack *&s,Elemtype x,Elemtype y){
	if(s->top==MaxSize-1){
		return 0;
	}
	s->top++;
	s->datax[s->top]=x;
	s->datay[s->top]=y;
	return 1;
}

bool Pop(SqStack *&s){
	if(s->top==-1){
		return 0;
	}
	s->top--;
	return 1;
}


bool GetTop(SqStack *&s,Elemtype &x,Elemtype &y){
	if(s->top==-1){
		return 0;
	}
	s->datax[s->top]=x;
	s->datay[s->top]=y;
	return 1;
}

void dfs(SqStack *&s,int x, int y){
  if(x==n-2&&y==m-2){
  	for(int q=0;q<s->top;q++){
		cout<<s->datax[q]<<" "<<s->datay[q]<<endl;
	}
  }
  for(int i=0; i<4; i++){
    int a=x+dx[i], b=y+dy[i];
    if(a<0||a>n-1||b<0||b>m-1||g[a][b])continue;
    g[a][b]=1;
    Push(s,a,b);
    dfs(s,a,b);
    g[a][b]=0;
    Pop(s);
  }    
}

int main(){
	int e;
	SqStack *s=new SqStack;
	InitStack(s);
	cin>>n>>m;
	for(int i=0;i<n;i++){
		for(int j=0;j<m;j++){
			cin>>g[i][j];
		}
	}
	int x=1,y=1;
	Push(s,1,1);
	dfs(s,1,1);
	cout<<n-2<<" "<<m-2;
}











