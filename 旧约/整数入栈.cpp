#include<bits/stdc++.h>
using namespace std;
typedef int Elemtype;
#define MaxSize 1000

typedef struct{
	Elemtype data[MaxSize];
	int top;
}SqStack;
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

bool Push(SqStack *&s,Elemtype e){
	if(s->top==MaxSize-1){
		return 0;
	}
	s->top++;
	s->data[s->top]=e;
	return 1;
}

bool Pop(SqStack *&s,Elemtype &e){
	if(s->top==-1){
		return 0;
	}
	e=s->data[s->top];
	s->top--;
	return 1;
}


bool GetTop(SqStack *&s,Elemtype &e){
	if(s->top==-1){
		return 0;
	}
	e=s->data[s->top];
	return 1;
}


int main(){
	int n,e;
	SqStack *s=new SqStack;
	InitStack(s);
	cin>>n;
	bool f=1;
	for(int i=0;i<n;i++){
		cin>>e;
		if(e==-1&&StackEmpty(s)){
			f=0;
		}else if(e==-1){
			Pop(s,e);
		}else if(e>0)Push(s,e);
		
	}
	if(!f){
		cout<<"ERROR";return 0;
	}
	if(!GetTop(s, e))cout<<"EMPTY\n";
	else cout<<e<<endl;
}











