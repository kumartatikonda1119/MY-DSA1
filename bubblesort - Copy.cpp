#include<stdio.h>
void bubble(int *arr,int size)
{ int k;
   int m=0;
	for(int i=0;i<size;i++)
	{
		for(int j=0;j<size-i-1;j++)
		{
			if(arr[j]>arr[j+1])
			{
				m++;
				
				k=arr[j+1];
				arr[j+1]=arr[j];
				arr[j]=k;
				printf("\n");
					for(int i=0;i<size;i++)
	{
		printf("%d ",arr[i]);
		
	}printf("\n");
	
			}
		}
	}
	
		for(int i=0;i<size;i++)
	{
		printf("%d",arr[i]);
		
	}
}
int main()
{
	int a,b,c,d;
	scanf("%d",&a);
	int arr[a];
	for(int i=0;i<a;i++)
	{
		scanf("%d",&arr[i]);
		
	}
	bubble(arr,a);

}
