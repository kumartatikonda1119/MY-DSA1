#include <stdio.h>
#include <stdlib.h>
struct node
{
    int data;
    struct node *next;
};
int size = 0;
typedef struct node N;
N *head = NULL;
N *tail = NULL;
void enqueue(int val)
{
    N *newnode = (N *)malloc(sizeof(N));
    newnode->data = val;
    newnode->next = NULL;
    if (head == NULL)
    {
        head = newnode;
        tail = newnode;
    }
    else
    {
        tail->next = newnode;
        tail = newnode;
    }
    size++;
}
void dequeue()
{
    if (head == NULL)
    {
        printf("No elements present in the queue\n");
        return;
    }
    else
    {
    	N *k=head;
        head = head->next;
        free(k);
        if(head==NULL)tail=NULL;
    }
    size--;
}
void get_front()
{
    if (head == NULL)
        printf("NO elemts in the queue\n");
    printf("The value present at front is :%d \n", head->data);
}
void get_rear()
{
    if (head == NULL)
        printf("No elements in queue\n");
    printf("The value present at reat :%d \n", tail->data);
}
void get_size()
{
    printf("The size of queue is:%d \n", size);
}
void display()
{
    if (head == NULL&&!tail)
    {
        printf("No elements to display\n");
    }
    else
    {
        N *temp = head;
        while (temp)
        {
            printf("%d ", temp->data);
            temp = temp->next;
        }
        printf("\n");
    }
}

int main()
{
    int ch, val;
    while (1)
    {
        printf("Enter the value to perform following opertion \n1.Enqueue\n2.Dequeue\n3.Get front\n4.Get rear\n5.Get size\n6.Display\nAny other to exit\nEnter the value here: ");
        scanf("%d", &ch);
        if (ch == 1)
        {
            printf("\nEnter the value to insert in queue: ");
            scanf("%d", &val);
            enqueue(val);
        }
        else if (ch == 2)
        {
            dequeue();
        }
        else if (ch == 3)
        {
            get_front();
        }
        else if (ch == 4)
        {
            get_rear();
        }
        else if (ch == 5)
        {
            get_size();
        }
        else if (ch == 6)
        {
            display();
        }
        else
        {
            printf("Thank you\n");
            break;
        }
    }
}
