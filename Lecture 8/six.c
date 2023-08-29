#include<stdio.h>
#include<string.h>
main(){
	char name[20],name2[20];
	printf("Enter the first string : ");
	scanf("%s",&name);
	printf("Enter the first string : ");
	scanf("%s",&name2);
	strlwr(name);
	strupr(name2);
	printf("%s",name);
	printf("%s",name2);
}
