#include<stdio.h>
int st[10001];
int size;
int top=-1;
void push(int ele)
{
	if(top ==size-1)printf("stack is in over flow \n");
	else {
		top++;
		st[top]=ele ;
		
	}
	
	
}
void pop()
{
	if(top==-1)printf("stack is empty\n");
	else {
		printf("element deleted :%d\n",st[top]);
		top--;
		
	}
}

void display ()
{
	if(top==-1)
	
	{
		printf ("stack is empty \n");
		
	}
	else {
		for(int i=top;i>=0;i--)
		{
			printf("%d\t",st[i]);
			
		}printf("\n");
		
	}
}

int main()
{
	printf("enter the size of the stack");
	scanf("%d",&size);
	int ch;
	while(1)
	{
		printf("\nenter \n1.push\n2.pop\n3.display\n");
		scanf("%d",&ch);
		if(ch==1)
		{
			int ele;
			scanf("%d",&ele );
			
			push(ele);
			
			
		}else if(ch==2)
		{
			pop();
			
		}else if(ch==3)
		{
			display();
			
		}else {
			break;
			
		}
	}
	
}
