#include <stdio.h>
#include <stdlib.h>

int cmpfunc (const void * a, const void * b) {
   return ( *(int*)b - *(int*)a );
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
	int m=0,sum=0;
	for(i=0;i<n;i++)
	{
		if(i%k==0)
			{
				m=m+1;
			}
		sum=sum+m*arr[i];
	}
	printf("%d",sum);
	return 0;
}
