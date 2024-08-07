#include<stdio.h>
void inser(int *arr,int size)
{
	int key,j;
	for(int i=1;i<size;i++)
	{
		key=arr[i];
		j=i-1;
		while(j>=0&&arr[j]>arr[i])
		{
			arr[j+1]=arr[j];
			j--;
		}
		arr[j+1]=key;
		
	}
	for(int i=0;i<size;i++)
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
	inser(arr,a);
}
