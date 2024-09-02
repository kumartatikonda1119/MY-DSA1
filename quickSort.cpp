#include<stdio.h>
void print_array(int *a, int size)
{
	int i;
	for(i=0;i<size;i++)
	{
		printf("%d ",a[i]);
	}
	printf("\n");
}
int  partition(int *a, int l, int h)
{
	int r[h-l+1];
	int pivot = a[l];
	int i,k = 0;
	// less than pivot
	for(i=l+1;i<=h;i++)
	{
		if(a[i] <= pivot)
		{
			r[k]=a[i];
			k++;
		}
	}
	// storing the index of pivot in original
	int ind = l+k;
	r[k]=pivot;
	k++;
	// greater than pivot
	for(i=l+1;i<=h;i++)
	{
		if(a[i] > pivot)
		{
			r[k]=a[i];
			k++;
		}
	}
	//put the elements back in original array
	k=0;
	for(i=l;i<=h;i++)
    {
    	a[i]=r[k];
    	k++;
	}
	return ind;
}
void Quick_sort(int *a, int l, int h)
{
	if(l<h)
	{
		int p = partition(a, l, h);
		Quick_sort(a, l, p-1);
		Quick_sort(a, p+1, h);
	}
}
int main()
{
     int n;
	 scanf("%d",&n);
	 int a[n], i;
	 for(i=0;i<n;i++)
	 {
	 	scanf("%d",&a[i]);
	 }
	 printf("Before Sorting: ");
	 print_array(a, n);
	 //quick sort function call
	 Quick_sort(a, 0, n-1);
	 printf("After Sorting: ");
	 print_array(a, n);
}