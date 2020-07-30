#include <stdio.h>
#include <stdlib.h>

int cmpfunc (const void * a, const void * b) {
   return ( *(int*)a - *(int*)b );
}

void minimumAbsoluteDifference(int N, int* arr) 
{
	int i=0,min;
	min=abs(arr[1]-arr[0]);
	
	for (i=1;i<N-1;i++)	
	{
		if (abs(arr[i+1]-arr[i])<min)
		{
			min=arr[i+1]-arr[i];
		}
	}
	printf("%d",min);
}

int main()
{
	int i,N;
	scanf("%d",&N);
	int arr[N];
	for (i=0;i<N;i++)
	{
		scanf("%d",&arr[i]);
	}
	qsort(arr,N, sizeof(int), cmpfunc);
	minimumAbsoluteDifference(N,arr);
	return 0;
}
