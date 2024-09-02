#include<stdio.h>
int bin(int *arr,int size,int key,int lo,int hi)
{
	int mid;
	if(lo>hi)
	{
		return -1;
		
	}
	if(lo<=hi)
	{
		
		mid=(lo+hi)/2;
		if(arr[mid]==key)
		{
			return mid;
		}else if(arr[mid]>key)
		{
		     
		 	bin(arr,size,key,lo,hi=mid-1);
			
			
		}else if(arr[mid]<key)
		{
			
			bin(arr,size,key,lo=mid+1,hi);
			
		}
	 	
	}
	

	
}
int main()
{
	int a,b,c,d,e,f;
	printf("enter the size");
	scanf("%d",&a);
	int arr[a];
 for(int i=0;i<a;i++)
 {
 	scanf("%d",&arr[i]);
 	
}

printf("enter the key");
scanf("%d",&b);
int k=bin(arr,a,b,0,a-1);
if(k==-1)printf("not found");
else {
	printf("%d",k);
}
}
