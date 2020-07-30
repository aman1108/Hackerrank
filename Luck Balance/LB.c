#include<stdio.h>
#include<stdlib.h>

int cmpfunc (const void * a, const void * b) {
   return ( *(int*)b - *(int*)a );
}

int main()
{
	int i , N ,k,luck=0;
	scanf("%d %d", &N,&k);
	int arr[N],l,m,p=0;
	for (i=0;i<N;i++)
	{
		scanf("%d %d",&l,&m);
		if (m==0)
			luck=luck+l;
		else
		{
			arr[p]=l;
			p=p+1;
		}
			
	}
	qsort(arr,p, sizeof(int), cmpfunc);

	for (i=0;i<p;i++)
	{
		if(i<k)
			luck=luck+arr[i];
		else
			luck=luck-arr[i];
	}
	printf("%d",luck);
	return 0;
}
