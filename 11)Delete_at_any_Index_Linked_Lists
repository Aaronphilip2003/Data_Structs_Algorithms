#include<stdio.h>
#include<stdlib.h>

struct Node
{
	int data;
	struct Node* next;
};


void listTraversal(struct Node* ptr)
{
	while(ptr!=NULL)
	{
	printf("ELEMENT: %d\n",ptr->data);
	ptr=ptr->next;
	}
}

struct Node* deleteAtIndex(struct Node*head,int index)
{
struct Node* p= head;
struct Node* q=head->next;

for(int i=0;i<index-1;i++)
{
	p=p->next;
	q=q->next;
}
p->next=q->next;
free(q);
return head;
}

int main()
{
//declaring data 

struct Node* head;
struct Node* second;
struct Node* third;

//memory allocation

head=(struct Node*)malloc(sizeof(struct Node));
second=(struct Node*)malloc(sizeof(struct Node));
third=(struct Node*)malloc(sizeof(struct Node));

//declaring data into the allocated memory
head->data=100;
head->next=second;

second->data=200;
second->next=third;

third->data=300;
third->next=NULL;

listTraversal(head);

printf("-------------------------------------------------\n");

head=deleteAtIndex(head,2);
listTraversal(head);


}
