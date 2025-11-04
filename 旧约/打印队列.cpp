#include<bits/stdc++.h>
using namespace std;
typedef int ElemType;
int arr[105];
typedef struct qnode{
	ElemType data;
	int num; 
	struct qnode *next;
}DataNode;

typedef struct{
	DataNode *front;
	DataNode *rear;
}LinkQuNode;

void InitQueue(LinkQuNode *&q){//新建 
	q=(LinkQuNode *)malloc(sizeof(LinkQuNode));
	q->front=q->rear=NULL;
}

void DestoryQueue(LinkQuNode *&q){//销毁 
	DataNode *pre=q->front,*p;
	if(pre!=NULL){
		p=pre->next;
		while(p!=NULL){
			free(pre);
			pre=p;
			p=p->next;
		}
		free(pre);
	}
	free(q);
}

bool QueueRmpty(LinkQuNode *q){//判断是否为空 
	return(q->rear==NULL);
} 

bool enQueue(LinkQuNode *&q,ElemType e,int num){//入队 
	DataNode *p;
	p=(DataNode *)malloc(sizeof(DataNode));
	p->data=e;
	p->num=num;
	p->next=NULL;
	if(q->rear==NULL)q->front=q->rear=p;
	else{
		q->rear->next=p;
		q->rear=p;
	}
	return 1;
}

bool deQueue(LinkQuNode *&q,ElemType &e,int &num){//出队 
	DataNode *t;
	
	if(q->rear==NULL)return 0;
	t=q->front;
	if(q->front==q->rear)q->front=q->rear=NULL;
	else q->front=q->front->next;
	e=t->data;
	num=t->num;
	free(t);
	return 1;
}

void solve(){
	LinkQuNode *q;
	ElemType e;
	InitQueue(q);
	int num;
	int n,m;
	cin>>n>>m;
	for(int i=0;i<n;i++){
		cin>>num;
		enQueue(q,i,num);
		arr[i]=num;
	}
	sort(arr,arr+n);
	int w=0;
	while(true){
		deQueue(q,e,num);
			if(e==m&&num==arr[n-1]){
				w++;
				cout<<w<<endl;
				DestoryQueue(q);
				break;
			}else if(num==arr[n-1]){
					arr[n-1]=0;
					w++;
					sort(arr,arr+n);		
			}else{
				enQueue(q,e,num);
			}
		}
	}


int main(){
	int t;
	cin>>t;
	while(t--)solve();
}




















