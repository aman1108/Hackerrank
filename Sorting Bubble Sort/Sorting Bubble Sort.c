# include <stdio.h>
int main()
{
	int n,i,j,s=0,t;
	scanf("%d",&n);
	int a[n];
	for (i=0;i<n;i++)
	{
		scanf("%d",&a[i]);
	}
	for (i = 0; i < n; i++) {
    
    for (j = 0; j < n - 1; j++) {
        // Swap adjacent elements if they are in decreasing order
        if (a[j] > a[j + 1]) {
            	t=a[j];
				a[j]=a[j+1];
				a[j+1]=t;
            s=s+1;
        }
    }
}
    printf("Array is sorted in %d swaps.\n",s);
    printf("First Element: %d\n",a[0]);
    printf("Last Element: %d\n",a[n-1]);
	return 0;	
}
