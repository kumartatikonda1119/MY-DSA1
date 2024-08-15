#include<stdio.h>
#include<stdlib.h>
struct node
{
	int data;
	struct node *next;
	struct node *prev;
};
typedef struct node Node;
Node *head = NULL;
Node *tail = NULL;
void insert_at_head(int val)
{
	Node *newnode =(Node*)malloc(sizeof(Node));
	newnode->data=val;
	newnode->next=NULL;
	newnode->prev=NULL;
	if(head==NULL&&tail==NULL)
	{
		head=newnode;
		tail=newnode;
		
	}else {
		newnode->next=head;
		head=newnode;
		
	}
}
void insert_at_tail(int val)
{
	
	Node *newnode =(Node*)malloc(sizeof(Node));
	newnode->data=val;
	newnode->next=NULL;
	newnode->prev=NULL;
	if(head==NULL&&tail==NULL)
	{
		head=newnode;
		tail=newnode;
		
	}else {
	tail->next=newnode;
	newnode->prev=tail;
	tail=newnode;
	
		
	}
}
void display_from_left()
{
	Node *temp=head;
	if(head==NULL&&tail==NULL)
	{
		printf("no nodes to display");
	}
	else {
	
	while(temp)
	{
		printf("%d ",temp->data);
		temp=temp->next;
		
	}
}
}
void display_from_right()
{
		Node *temp=tail;
	if(head==NULL&&tail==NULL)
	{
		printf("no nodes to display");
	}
	while(temp)
	{
		printf("%d ",temp->data);
		temp=temp->prev;
		
	}
	printf("\n");
}
int main()
{

	while(1)
	{
			int c;
	printf("\n enter the value \n1.insert at head\n2.insert at tail\n5.display from left\n6.display from right \n ");
	scanf("%d",&c);
		if(c==1)
		{
			int val;
			printf("\nenter the value for data\n");
			scanf("%d",&val);
			insert_at_head(val);
		}
		else if(c==2)
		{ 
		int val;
		printf("enter the value for the data");
		scanf("%d",&val);
		insert_at_tail(val);
			
		}
		else if(c==5)
		{
			display_from_left();
			
		}else if(c==6)
		{
			display_from_right();
			
		}else {
			printf("thank you\n");
			break;
			
		}
	}
}

