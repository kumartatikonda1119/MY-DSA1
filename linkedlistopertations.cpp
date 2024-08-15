#include<stdio.h>
#include<stdlib.h>
struct node{
	int data;
	struct node *next;
	
	
};
typedef struct node Node;
Node *head=NULL;
void insert_at_head(int val){
	Node *newnode=(Node *)malloc(sizeof(Node));

	newnode->data=val;
	newnode->next=NULL;
	if(head==NULL)
	{
		head=newnode;
	
		
		
	}else {
		newnode->next=head;
		head=newnode;
		
	}
}
void insert_at_tail(int val){
	Node *newnode=(Node *)malloc(sizeof(Node));
		Node *temp=head;
	newnode->data=val;
	newnode->next=NULL;
	if(head==NULL)
	{
		head=newnode;
		return;
		
	}else {
		temp=head;
		while(temp->next!=NULL)
		{
			temp=temp->next;
			
		}temp->next=newnode;
		
		
	}
}
void disp(){
	if(head==NULL)
	{
		printf("no nodes\n");
		return;
		
	}
	Node *temp=head;
	while(temp!=NULL)
	{
		printf("%d\t",temp->data);
		temp=temp->next;
		
	}printf("\n");
	
}
void delete_at_head()
{
	if(head==NULL)
	{
		printf("There are no nodes");
		
	}else {
		head=head->next;
		
	}
}
void delete_at_tail()
{
	Node *temp=head;
	if(head==NULL)
	{
		printf("NO nodes");
	}
	else if(temp->next==NULL)
	{
		head=NULL;
		
	}
	else {
	
	while(temp->next->next!=NULL)
	{
		temp=temp->next;
		
	}temp->next=NULL;
}
}
int main()
{
     int c,val;
     while (1)
     {
     	printf("Enter\n1.insert at head\n2.insert at tail\n3.display\n4.delete at head \n5.delete at tail\nany other to exit \n");
     	scanf("%d",&c);
     	if(c==1)
     	{
     		printf("Enter a value for the node to be inserted  ");
     		scanf(" %d",&val);
     		insert_at_head(val);
     		
     		
		 }else if(c==2)
		 {
		 	printf("enter the value to store at tail\n");
		 	scanf("%d",&val);
		 	insert_at_tail(val);
		 }else if(c==3)
		 {
		 	disp();
		 	
		 
		 }
		 else if(c==4)
		 {
		 	delete_at_head();
		 }else if(c==5){
		 	delete_at_tail();
		 }
		 
		 else {
		 	printf("Thank you \n");
		 	break;
		 	
		 	
		 }
	 }
}
