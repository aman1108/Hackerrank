#include<stdio.h>
#include<stdlib.h>

int cmpfunc (const void * a, const void * b) {
   return ( *(int*)a - *(int*)b );
}

int main()
{
	int n,k,i=0;
	scanf("%d %d",&n,&k);
	int arr[n];
	for(i=0;i<n;i++)
	{
		scanf("%d",&arr[i]);
	}
	qsort(arr,n, sizeof(int), cmpfunc);
	
	int j=1,count=0;
	for(i=0;i<n;i++)
	{
		while((arr[j]-arr[i]<k) && j<n)
		{
			j=j+1;	
		}	
		if(arr[j]-arr[i]==k)
		{
			count=count+1;
		}
	}
	printf("%d",count);
	return 0;
}

