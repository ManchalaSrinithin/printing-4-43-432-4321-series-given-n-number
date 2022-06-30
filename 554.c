#include <stdio.h>//5 54 543 5432 54321
main()
{
	int i,j,n;
	printf("\nEnter the value");
	scanf("%d",&n);
   	for(i=n;i>=1;i--)
	{
		for(j=n;j>=i;j--)
		{
		printf("%4d",j);
		}
	printf("\n");
	}
	
}
