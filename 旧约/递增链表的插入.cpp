#include<bits/stdc++.h>
#define MaxSize 50 
typedef int ElemType;
using namespace std;

typedef struct node{
	ElemType date;
	struct node *next=NULL;
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
bool cr(LinkNode * &L,ElemType t){
	LinkNode *p=L->next,*s,*q;
	while(p!=NULL){
		if(t<=(p->date)){
			break;
		}else {
			q=p;
			p=p->next;
			
		}
		
	}
	
	if(p==L->next){
		s=(LinkNode *)malloc(sizeof(LinkNode));
		s->date=t;
		s->next=L->next;
		L->next=s;
		return 1;
	}
	else{
		s=(LinkNode *)malloc(sizeof(LinkNode));
		s->date=t;
		s->next=q->next;
		q->next=s;
		return 1;
	}
}
int main(){
	LinkNode *L=new LinkNode;
	int c[10];
	int n,t;
	cin>>n>>t;
	for(int i=0;i<n;i++){
		cin>>c[i];
	}
	CreatList(L,c,n);
	cr(L,t);
	DispList(L);
	
} 





