#include<stdio.h>
void select(int *arr,int size )
{
	int a,b,c=0,min;
	for(int i=0;i<size;i++)
	{
		min=i;
		for(int j=i+1;j<size;j++)
		{
			if(arr[j]<arr[min])
			{
				min=j;
			}
		}
		c=arr[min];
		arr[min]=arr[i];
		arr[i]=c;
		
		
		
	}
	for(int i=0;i<size ;i++)
	{
		printf("%d",arr[i]);
	}
}
	

int main()
{
	int a;
	scanf("%d",&a);
	int arr[a];
	for(int i=0;i<a;i++)
	{
	scanf("%d",&arr[i]);
	}
	select(arr,a);
}

