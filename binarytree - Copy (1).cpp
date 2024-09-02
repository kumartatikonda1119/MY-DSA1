#include<stdio.h>
#include<math.h>
#include<stdlib.h>
struct node{
    int data;
    struct node *left;
    struct node *right;
};
typedef struct node TreeNode;
void preOrder(TreeNode *root)
{
    if(root != NULL)
    {
        printf("%d ", root->data);
        preOrder(root->left);
        preOrder(root->right);
    }
}
int main()
{
    int levels;
    printf("Enter no. of levels: ");
    scanf("%d", &levels);
    // no_of_nodes = 2^levels-1;
    int no_of_nodes = (int)pow(2, levels)-1;
    TreeNode *nodes[no_of_nodes]; //Arrays of nodes
    for(int i=0;i<no_of_nodes;i++)
    {
        printf("Index %d:\nEnter\n1. Node\n2. NULL\n", i);
        int ch;
        scanf("%d", &ch);
        if(ch == 1)
        {

        }
        else
        {

        }
    }
}
