#include<stdio.h>
#include<stdlib.h>
struct node {
	int row;
	int col;
	int data;
	struct node *next;
	
};
typedef struct node Node;
Node *head =NULL;

void inser(int r,int c,int v)
{
	Node *newnode=(Node*)malloc(sizeof(Node ));
	newnode->row=r;
	newnode->col=c;
	newnode->data=v;
	newnode->next=NULL;
	if(head==NULL)
	{
		head=newnode;
		
	}else {
		Node *temp=head;
		while(temp->next!=NULL)
		{
			temp=temp->next;
			
		}temp->next=newnode;
		
	}
}
void display()
{
	printf("\n The sparse matrix is :\n");
	Node *temp=head;
	while(temp!=NULL)
	{
		printf("%d\t%d\t%d\n",temp->row,temp->col,temp->data);
		temp=temp->next;
		
	}
}

int main()
{
	int r,c,i,j;
	scanf("%d%d",&r,&c);
	int mat [r][c];
	for(i=0;i<r;i++)
	{
		for(j=0;j<c;j++)
		{
			scanf("%d",&mat[i][j]);
		}
	}
	
		for(i=0;i<r;i++)
	{
		for(j=0;j<c;j++)
		{
			if(mat[i][j]!=0)
			{
				inser(i,j,mat[i][j]);
				
			}
		}
	}
	display();
	
	
}
