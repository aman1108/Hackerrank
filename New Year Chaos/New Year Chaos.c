#include <stdio.h>
int minimumBribes(long int n,long int* arr) 
{
	long int i,count=0,temp;
	for (i=n-1;i>=0;i--)
	{
		if(arr[i]!=i+1)
		{
			if(arr[i-1]==i+1)
			{
				count =count + 1;
				temp=arr[i-1];
				arr[i-1]=arr[i];
				arr[i]=temp;
			}
			else if (arr[i-2]==i+1)
			{
				count = count + 2;
				temp=arr[i-2];
				arr[i-2]=arr[i-1];
				arr[i-1]=arr[i];
				arr[i]=temp;
			}
			else 
			{printf("Too chaotic\n");
			return 0;
			}
		}
	}
	printf("%ld\n",count);
	return 0;
}
int main()
{
	int t;
	scanf("%d",&t);
	while(t--)
	{
		long int n,i=0;
		scanf("%ld",&n);
		long int arr[n];
		for(i=0;i<n;i++)
		{
			scanf("%ld",&arr[i]);
		}
	minimumBribes(n,arr);
	}
	return 0;
}
