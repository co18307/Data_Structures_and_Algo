#include<stdio.h>
int main()
{
	int t,n,i,j;
	scanf("%d",&t);
	while(t--)
	{
		scanf("%d",&n);
		int a[n][n],sum=0;
		for(i=0;i<n;i++)
		{
			for(j=0;j<=i;j++)
			{
				scanf("%d",&a[i][j]);
			}
		}
		for(i=n-1;i>0;i--)
		{
			for(j=0;j<=i;j++)
			{
				if(a[i][j]>a[i][j+1])
				{
					a[i-1][j]+=a[i][j];
				}
				else
				{
					a[i-1][j]+=a[i][j+1];
				}
			}
		}
		printf("%d\n",a[0][0]);
	}	
	return 0;
}
