#include<bits/stdc++.h>
#define MaxSize 50 
typedef char ElemType;
using namespace std;

typedef struct node{
	ElemType date;
	struct node *next;
}LinkNode;

void CreatList(LinkNode * &L,ElemType a[],int n){//新建 
	LinkNode *s,*r;
	L=(LinkNode *)malloc(sizeof (LinkNode));
	r=L;
	for(int i=0;i<n;i++){
		s=(LinkNode *)malloc(sizeof(LinkNode));
		s->date=a[i];
		r->next=s;
		r=s;
	}
	r->next=NULL;
}
void InitList(LinkNode* &L){//初始化 
	L=(LinkNode *)malloc(sizeof(LinkNode));
	L->next=NULL;
}

void DestoryList(LinkNode* &L){//释放 
	LinkNode * pre=L,*p=L->next;
	while(p!=NULL){
		free(pre);
		pre=p;
		p=p->next;
	}
	free(pre);
}

bool ListEmpty(LinkNode *L){//判断是否为空 
	return (L->next==0);
}


int ListLength(LinkNode *L){//返回长度 
	int n=0;
	LinkNode*p=L;
	while(p->next!=NULL){
		n++;
		p=p->next;
	}
	return (n);
}

void DispList(LinkNode *L){//输出 
	LinkNode*p=L->next;
	while(p->next!=NULL){
		cout<<p->date<<" ";
		p=p->next;
	}
	cout<<p->date<<endl;
}

int LocateElem(LinkNode *L ,ElemType e){//查找 
	int i=1;
	LinkNode *p=L->next;
	while(p!=NULL&&p->date!=e){
	p=p->next;
	i++;
	}
	if(p==NULL)return 0;
	else return i;
}


void out(LinkNode *L,int i){//输出指定位置元素 
	if(i<=0)return ;
	LinkNode *p=L;
	for(int j=0;j<i;j++){
		p=p->next;
	}
	cout<<p->date<<endl;
}

bool ListInsert(LinkNode * &L,int i,ElemType e){
	int j=0;
	LinkNode *p=L,*s;
	if(i<=0)return 0;
	while(j<i-1&&p!=NULL){
		j++;
		p=p->next;
	}
	if(p==NULL)return 0;
	else{
		s=(LinkNode *)malloc(sizeof(LinkNode));
		s->date=e;
		s->next=p->next;
		p->next=s;
		return 1;
	}
}

bool ListDelete(LinkNode * &L,int i){
	int j=0;
	LinkNode *p=L,*s;
	if(i<=0)return 0;
	while(j<i-1&&p!=NULL){
		j++;
		p=p->next;
	}
	if(p==NULL)return 0;
	else{
		s=p->next;
		if(s==NULL)return 0;
		p->next=s->next;
		free(s);
		return 1;
	}
}
int main(){
	LinkNode *L=new LinkNode;
	char c[5]={'a','b','c','d','e'};
	CreatList(L,c,5);
	DispList(L);
	cout<<ListLength(L)<<endl;
	if(ListEmpty(L))cout<<"yes\n";
	else cout<<"no\n";
	out(L,3);
	cout<<LocateElem(L ,'a')<<endl;
	ListInsert(L,4,'f');
	DispList(L);
	ListDelete(L,3);
	DispList(L);
	DestoryList(L);
	
} 





