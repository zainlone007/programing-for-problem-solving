// Display the series 12345 12345 12345 ... (n times) (using nesting of loops)
#include<stdio.h>
int main()
{
	int n,i,j;
	printf("enter valur of n");
	scanf("%d",&n);
	for(i=1;i<=n;i++)
	{
		for(j=1;j<=5;j++)
		{
			printf("%d",j);
		}
		printf("\t");
	}
	return 0;
}
