#include<bits/stdc++.h>
using namespace std;
typedef char ElemType;
#define MaxSize 105

typedef struct node{
	ElemType data='\0';
	struct node *lchild;
	struct node *rchild;
}BTNode;

void CreateBTree(BTNode *&b,char *str){
	BTNode *St[MaxSize],*p;
	int top=-1,k,j=0;
	char ch;
	b=NULL;
	ch=str[j];
	while(ch!='\0'){
		switch(ch){
			case '(':top++;St[top]=p;k=1;break;
			case ')':top--;break;
			case',':k=2;break;
			default :p=(BTNode *)malloc(sizeof(BTNode));
				p->data=ch;
				p->lchild=p->rchild=NULL;
				if(b==NULL)b=p;
				else {
					switch(k){
						case 1:St[top]->lchild=p;break;
						case 2:St[top]->rchild=p;break;
					}
				}		
		}
		j++;
		ch=str[j];
	}
}

int BTHeight(BTNode *b){
	int lchildh,rchildh;
	if(b==NULL)return 0;
	else {
		lchildh=BTHeight(b->lchild);
		rchildh=BTHeight(b->rchild);
		return(lchildh>rchildh)? lchildh+1:rchildh+1;
	}
	
}

void DispBTree(BTNode *b){
	if(b!=NULL){
		printf("%c",b->data);
		if(b->lchild!=NULL||b->rchild!=NULL){
			printf("(");
			DispBTree(b->lchild);
			if(b->rchild!=NULL)printf(",");
			DispBTree(b->rchild);
			printf(")");
		}
	}
} 

void PreOrder(BTNode *b){
	if(b!=NULL){
		cout<<b->data<<" ";
		PreOrder(b->lchild);
		PreOrder(b->rchild);
	}
	
}

void inOrder(BTNode *b){
	if(b!=NULL){
		inOrder(b->lchild);
		cout<<b->data<<" ";
		inOrder(b->rchild);
	}
	
}


void postOrder(BTNode *b){
	if(b!=NULL){
		postOrder(b->lchild);
		postOrder(b->rchild);
		cout<<b->data<<" ";
	}
	
}

void cx(BTNode *b){
	queue<BTNode *>q;
	if (b->data != '\0')  
		q.push(b);

	while (!q.empty()) {
		BTNode* front = q.front();
		printf("%c ", front->data);

		if (front->lchild != NULL)
			q.push(front->lchild);
		if (front->rchild != NULL)
			q.push(front->rchild);
		q.pop();
	}

	printf("\n");
}

void tj(BTNode *b){
	queue<BTNode *>q;
	int sum=0;
	if (b->data != '\0') {
		q.push(b);
		sum++;
	}

	while (!q.empty()) {
		BTNode* front = q.front();
		if (front->lchild != NULL)
			{
				q.push(front->lchild);sum++;
			}
		if (front->rchild != NULL)
			{
				q.push(front->rchild);sum++;
			}
		q.pop();
	}
	cout<<sum;
	printf("\n");
}

int main(){
	char str[1000];
	memset(str,'\0',sizeof(str));
	cin>>str;
	BTNode* b;
	CreateBTree(b,str);
	DispBTree(b);
	cout<<endl;
	cout<<BTHeight(b)<<endl;
	tj(b);
	PreOrder(b);
	cout<<endl;
	inOrder(b);
	cout<<endl;
	postOrder(b);
	cout<<endl;
	cx(b);
}
