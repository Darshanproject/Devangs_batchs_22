#include<stdio.h>
main()
{
	int arr[100],i,m=0;
	printf("Please enetr the value below 100 :");
	scanf("%d",&m);
	printf("Enter the values :");
	for(i=0;i<m;i++)
	{
		scanf("%d",&arr[i]);
	}
	for(i=0;i<m;i++){
		printf("%d \t",arr[i]);
	}
}
