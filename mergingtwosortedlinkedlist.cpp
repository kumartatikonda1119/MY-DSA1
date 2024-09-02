#include<stdio.h>
#include<stdlib.h>
struct node {
	int data ;
	struct node *next ;
	
};
typedef struct node Node;
Node *linked(int val,Node *head)
{
	Node * newnode =(Node *)malloc (sizeof(Node ));
	newnode->data=val;
	newnode->next=NULL;
	if(head ==NULL)
	{
		head=newnode ;
		
	}else {
		Node *temp=head;
		while(temp->next!=NULL)
		{
			temp=temp->next;
		}
		temp->next=newnode ;
		
	}
	return head;
}
Node *link ()
{
	Node *head=NULL;
	
	int a;
	printf("enter the no of values for linked list ");
	scanf("%d",&a);
	
		for(int i=1;i<=a;i++)
	{
		int val;
		scanf("%d ",&val);
		
	head=linked(val,head);
	}
	return head;
}
void *add(Node *head1,Node *head2)
{
	Node *newhead=NULL;
	while(head1!=NULL&&head2!=NULL)
	{
		if(head1->data<=head2->data)
		{
			newhead=linked(head1->data,newhead);
			head1=head1->next;
		}else {
			newhead=linked(head2->data,newhead);
			head2=head2->next;
		}
	}
		if(head1==NULL)
	{
		while(head2!=NULL)
		{
		     newhead=linked(head2->data,newhead);
             head2=head2->next;
		}
	}
	else
	{
		while(head1!=NULL)
		{
	         newhead=linked(head1->data,newhead);
		head1=head1->next;
		}
	}
	printf("the merged linked list is :");
		while(newhead)
	{
		printf("%d ",newhead->data);
		newhead=newhead->next;
	}
	
}
void display(Node *head)
{
	Node * temp=head;
	
	while(temp)
	{
		printf("\n%d ",temp->data);
		temp=temp->next;
	}
}

int main ()
{
        Node *head1=link();
        
     Node *head2=link();
        display(head1);
        printf("\n");
       display (head2);
       printf("\n");
       add(head1,head2);
       
}
