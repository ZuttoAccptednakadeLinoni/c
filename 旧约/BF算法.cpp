#include<bits/stdc++.h>
#include<stdio.h>
#include<cstdio>
#define MaxSize 205 
typedef char ElemType;
using namespace std;

typedef struct {
	ElemType date[MaxSize];
	int length;
}SqList;
int jm[26]={'c'-'z','c'-'z','c'-'z',3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3};
void CreatList(SqList * &L,ElemType a[],int n){//新建 
	int i=0,k=0;
	L=(SqList *)malloc(sizeof (SqList));
	while(i<n){
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
void DispList(SqList *L){//输出 
	for(int i=0;i<L->length;i++){
		cout<<L->date[i];
	}
	cout<<endl;
}
 int BF(SqList s,SqList t){

 	int i=0,j=0;
 	while(i<s.length&&j<t.length){
 		if(s.date[i]==t.date[j]){
 			i++;j++;
		 }else{
		 	i=i-j+1;j=0;
		 } 
		 
	}
	if(j>=t.length)return(i-t.length);
	else return -1;
 }
void jiemi(SqList * &L){
	for(int i=0;i<=L->length;i++){
		if(L->date[i]<='z'&&L->date[i]>='a')L->date[i]-=jm[L->date[i]-'a'];
		else L->date[i]-=jm[L->date[i]-'A'];
	}
}
void solve(){
	char  t1[205];
	memset(t1,'\0',sizeof(t1));
	cin.getline(t1, 205);
	SqList *T=new SqList;
	int l1=strlen(t1);
	CreatList(T,t1,l1);
	jiemi(T);
	DispList(T);
}
int main(){
	int t;
	cin>>t;
	getchar();
	while(t--)solve();

	
} 





