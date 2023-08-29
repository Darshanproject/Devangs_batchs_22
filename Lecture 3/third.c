#include<stdio.h>
main()
{
	int j,arr[100],i,m,k;
	printf("Enter the value  below 100 :");
	scanf("%d",&m);
	printf("Enter the tables you want to print");
	for(j=0;j<m;j++)
	{
		for(k=0;k<m;k++)
		{
			scanf("%d",&arr[k]);
		}
		for(k=0;k<m;k++)
		{
			printf("This are the tables which you chossed : %d \t",arr[k]);
		}
		for(i=1;i<=10;i++)
	{
		printf("%d * %d  = %d \n",arr[k],i,arr[k]*i);
	}
	}
}
