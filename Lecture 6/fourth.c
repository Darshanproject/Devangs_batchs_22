#include<stdio.h>
main(){
	int ans;
	ans=sum();
	printf("This is your answer %d",ans);
}

int sum(){
	int a,b;
	printf("Enter the numbers ");
	scanf("%d%d",&a,&b);
	return a+b;
}
