#include<stdio.h>
void print(int *a,int l,int h)
{
	for(int i=l;i<=h;i++)
	{
		printf("%d",a[i]);
		
	}
}
void mer(int *a,int l,int m,int h)
{
	int result[h-l+1],i=l,j=m+1,k=0;
	while(i<=m&&j<=h)
	{
		if(a[i]<a[j])
		{
			result[k++]=a[i++];
			
		}else{
			result[k++]=a[j++];
			
		}
	}
	while(i<=m)
	{
		result[k++]=a[i++];
		
	}while(j<=h)
	{
		result[k++]=a[j++];
		
	}
	k=0;
	for(int i=l;i<=h;i++)
	{
	a[i]=result[k++];
		
	}
	
	
}
void merge(int *a,int l,int h)
{
	if(l<h)
	{
		int m=(l+h)/2;
		merge(a,l,m);
		merge(a,m+1,h);
		mer(a,l,m,h);
	print(a,l,h);
	printf("\n");	
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
	printf("before\n ");
	print(arr,0,a-1);
	printf("\n");
	merge(arr,0,a-1);	
	printf("after\n");
	print(arr,0,a-1);
	
}
