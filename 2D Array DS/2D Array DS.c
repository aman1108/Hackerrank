#include <stdio.h>

int hourglassSum(int n,int m,int arr[n][m]) 
{
	int i=0,k=1,max=-63,s=0;
	while(k<5)
	{
		for(i=1;i<5;i++)
		{
			s=arr[i][k]+arr[i-1][k-1]+arr[i-1][k]+arr[i-1][k+1]+arr[i+1][k]+arr[i+1][k-1]+arr[i+1][k+1];
			if (s>max)
				{max=s;
				}	
		}
		k=k+1;
	}
	printf("%d",max);
	return 0;
}

int main()
{
	int n,m,i,j;
	n=6;
	m=6;
	int arr[n][m];
		for (i=0;i<n;i++)
		{
			for (j=0;j<m;j++)
			{
			scanf("%d",&arr[i][j]);
		 	}
		}
	hourglassSum(n,m,arr);    
    return 0;
}


