#include<bits/stdc++.h>
using namespace std;
typedef char ElemType;

typedef struct qnode{
	ElemType data;
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

bool enQueue(LinkQuNode *&q,ElemType e){//入队 
	DataNode *p;
	p=(DataNode *)malloc(sizeof(DataNode));
	p->data=e;
	p->next=NULL;
	if(q->rear==NULL)q->front=q->rear=p;
	else{
		q->rear->next=p;
		q->rear=p;
	}
	return 1;
}

bool deQueue(LinkQuNode *&q,ElemType &e){//出队 
	DataNode *t;
	
	if(q->rear==NULL)return 0;
	t=q->front;
	if(q->front==q->rear)q->front=q->rear=NULL;
	else q->front=q->front->next;
	e=t->data;
	free(t);
	return 1;
}



int main(){
	LinkQuNode *q;
	ElemType e;
	InitQueue(q);
	cout<<"Init Queue\n";
	enQueue(q,'a');
	enQueue(q,'b');
	enQueue(q,'c');
	if(QueueRmpty(q))cout<<"Empty\n";
	else cout<<"NotEmpty\n";
	deQueue(q,e);
	cout<<e<<endl;
	enQueue(q,'d');
	enQueue(q,'e');
	enQueue(q,'f');
	while(deQueue(q,e))cout<<e<<" ";
	cout<<endl;
	DestoryQueue(q);cout<<"Destroy Queue\n";
}




















