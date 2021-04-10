#include<stdio.h>
#include <stdlib.h>

struct Node 
{
	int data;
	struct Node * next;
};

void listTraversal(struct Node *ptr)
{
	while(ptr!=NULL)
	{
		printf("ELEMENT :%d\n",ptr->data);
		ptr=ptr->next;

	}
}

struct Node* deleteFirst(struct Node* head)
{
	struct Node* ptr=head;
	head=head->next;
	free(ptr);
	return head;
}

int main()
{
	//decaring structs
	struct Node *head;
	struct Node *second;
	struct Node *third;


//memory allocation
head=(struct Node*)malloc(sizeof(struct Node));
second=(struct Node*)malloc(sizeof(struct Node));
third=(struct Node*)malloc(sizeof(struct Node));

//Addition of data into the allocted memory
head->data=33;
head->next=second;

second->data=44;
second->next=third;

third->data=55;
third->next=NULL;

listTraversal(head);

printf("-------------------------------------------------\n");

head=deleteFirst(head);
listTraversal(head);

printf("-------------------------------------------------\n");
head=deleteFirst(head);
listTraversal(head);


printf("-------------------------------------------------\n");
head=deleteFirst(head);
listTraversal(head);

}
