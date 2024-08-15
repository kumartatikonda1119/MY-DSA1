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
	Node *newNode = (Node *)malloc(sizeof(Node));
	newNode->data = val;
	newNode->next = NULL;
	newNode->prev = NULL;
	if(head == NULL)
	{
		head = tail = newNode;
	}
	else
	{
		head->prev = newNode;
		newNode->next = head;
		head = newNode;
	}
}
void insert_at_tail(int val)
{
	Node *newNode = (Node *)malloc(sizeof(Node));
	newNode->prev = NULL;
	newNode->next = NULL;
	newNode->data = val;
	if(head == NULL)
	{
		head = tail = newNode;
	}
	else
	{
		tail->next = newNode;
		newNode->prev = tail;
		tail=newNode; 
	}
}
void delete_at_head()
{
	if(head == NULL)
	{
		printf("No nodes to delete\n");
	}
	else
	{
		Node *temp = head;
		head = head->next;
		head->prev = NULL;
		free(temp);
	}
}
void delete_at_tail()
{
	if(head == NULL)
	{
		printf("No nodes to delete\n");
	}
	else if(head->next == NULL)
	{
		Node *temp = head;
		head = NULL;
		free(temp);
	}
	else
	{
		Node *temp = tail;
		tail->prev->next = NULL;
		tail = tail->prev;
		free(temp);
	}
}
void display()
{
	if(head == NULL)
	{
		printf("No nodes to display\n");
		return;
	}
	Node *temp = head;
	while(temp != NULL)
    {
    	printf("%d ", temp->data);
    	temp = temp->next;
	}
	printf("\n");
}
int main()
{
	int ch;
	//Infinite Loop
	while(1)
	{
		printf("Enter\n1.Insert at head\n2.Insert at tail\n3.Display\n4.delete at node\n5.delete at tail\nAny other to exit\n");
		scanf("%d", &ch);
		if(ch == 1)
		{
			//implement insert at head
			int val;
			printf("Enter a value for the node to be inserted: ");
			scanf("%d", &val);
			insert_at_head(val);
		}
		else if(ch == 2)
		{
			//implement insert at tail
			int val;
			printf("Enter a value for the node to be inserted: ");
			scanf("%d", &val);
			insert_at_tail(val);
		}
		else if(ch == 3)
		{
			//implement display
			display();
		}
		else if(ch == 4)
		{
			//implement delete at head
			delete_at_head();
		}
		else if(ch == 5)
		{
			delete_at_tail();
		}
		else
		{
			printf("Thank you for testing. ADIEU!!\n");
			break;
		}
	}	
}
