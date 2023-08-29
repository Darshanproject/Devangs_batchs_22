/*
1).Function without arguments Functions  without returntypes
2).Function with argurments Function  without  returntypes
3).Function without arguments  with returntypes
4).Function with arguments Functions with returntype
*/
#include<stdio.h>
main(){
	sum();
}
void sum(){
	int a,b;
	printf("Enter the values here : ");
	scanf("%d%d",&a,&b);
	printf("This is your addtion %d",a+b);
}


