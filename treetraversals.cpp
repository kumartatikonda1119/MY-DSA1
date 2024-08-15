#include <stdio.h>
#include<stdlib.h>
struct node{
	int data;
	struct node *left,*right ;
	
};
typedef struct node T;
 T * create (int val)
{
		T *node1=(T*)malloc (sizeof (T));
		node1->left=NULL;
     	node1->right=NULL;
	    node1->data=val;
	    return node1;
	    
}
void pre(T *root)
{
	if(root!=NULL)
	{
		printf("%d ",root->data);
		pre(root->left);
		pre(root->right);
		
	}
	
	
}
void in(T* root)
{
	
	if(root!=NULL)
	{
		in(root->left);
		printf("%d ",root->data);
		in(root->right);
	}
}
void post(T* root)
{
	if(root!=NULL)
	{
		post(root->left);
		post(root->right);
		printf("%d ",root->data);
		
	}
}
int main()
{
	T *node1=create(10);
		T *node2=create(20);
			T *node3=create(30);
				T *node4=create(40);
					T *node5=create(50);
						T *node6=create(60);
							T *node7=create(70);
	  node1->left=node2;
	  node1->right=node3;
	  node2->left=node4;
	  node2->right=node5;
	  node3->left=node6;
	  node3->right=node7;
	  T *root=node1;
	pre(root);
	printf("\n");
	in(root);
	printf("\n");
	post (root);
	
	
}
