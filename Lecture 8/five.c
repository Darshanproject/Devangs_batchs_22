#include<stdio.h>
#include<string.h>
main(){
	char name[20],name2[20];
	printf("Enter the first string : ");
	scanf("%s",&name);
	strcpy(name2,name);
	printf("%s",name2);
}
