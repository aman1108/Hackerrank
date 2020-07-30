#include<stdio.h>
#include<stdlib.h>

int cmpfunc (const void * a, const void * b) {
   return ( *(int*)a - *(int*)b );
}
int main()
{
	int n,k,i,min;
	scanf("%d",&n);
	scanf("%d",&k);
	int arr[n];
	for (i=0;i<n;i++)
	{
		scanf("%d",&arr[i]);
	}
	qsort(arr,n, sizeof(int), cmpfunc);
	min=arr[k-1]-arr[0];
	for(i=1;i<n-k+1;i++)
	{
		if ((arr[i+k-1]-arr[i])<min)
		{
			min=arr[i+k-1]-arr[i];
		}
	}
	printf("%d",min);
	return 0;
}

