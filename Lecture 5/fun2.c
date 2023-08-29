#include<stdio.h>
main(){
	int a,b;
	printf("Enter your a and b");
	scanf("%d%d",&a,&b);
	add(a,b);	
}
void add(int a,int b){
printf("This is your addtion of a %d  + b %d = %d",a,b,a+b);
}
