#include<bits/stdc++.h>
#define MaxSize 50 
typedef char ElemType;
using namespace std;

typedef struct {
	ElemType date[MaxSize];
	int length;
}SqList;

void CreatList(SqList * &L,ElemType a[],int n){//新建 
	int i=0,k=0;
	L=(SqList *)malloc(sizeof (SqList));
	while(i<=n){
		L->date[k]=a[i];
		k++;
		i++;
	}
	L->length=k;
}
void InitList(SqList* &L){//初始化 
	L=(SqList *)malloc(sizeof(SqList));
	L->length=0;
}

void DestoryList(SqList* &L){//释放 
	free(L);
}

bool ListEmpty(SqList *L){//判断是否为空 
	return (L->length==0);
}


int ListLength(SqList *L){//返回长度 
	return L->length;
}

void DispList(SqList *L){//输出 
	for(int i=0;i<L->length;i++){
		cout<<L->date[i]<<" ";
	}
	cout<<endl;
}

int LocateElem(SqList *L ,ElemType e){//查找 
	int i=0;
	while(i<L->length&&L->date[i]!=e)i++;
	if(i>=L->length)return 0;
	else return i+1;
}


void out(SqList *L,int i){//输出指定位置元素 
	cout<<L->date[i-1]<<endl;
}

bool ListInsert(SqList * &L,int i,ElemType e){
	int j;
	if(i<1||i>L->length+1||L->length==MaxSize){
		return 0;
	} 
	i--;
	for(j=L->length;j>i;j--){
		L->date[j]=L->date[j-1];
	}
	L->date[i]=e;
	L->length++;
	return 1;
}

bool ListDelete(SqList * &L,int i){
	int j;
	if(i<1||i>L->length+1){
		return 0;
	} 
	i--;
	for(int j=i;j<L->length;j++){
		L->date[j]=L->date[j+1];
	}
	L->length--;
	return 1;
}
int main(){
	SqList *L=new SqList;
	char c[5]={'a','b','c','d','e'};
	CreatList(L,c,4);
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





