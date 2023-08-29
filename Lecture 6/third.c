#include<stdio.h>
main(){
	int a,b;
	printf("Enter the values of a and b :");
	scanf("%d",&a);
	scanf("%d",&b);
	sum(a,b);
}
void sum(int a,int b){
	
	printf("This is addtion of a and b : %d",a+b);
}
