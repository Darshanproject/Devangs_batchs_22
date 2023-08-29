#include<stdio.h>
#include<string.h>
main(){
	char name[5]={"Hello"},name2[20];
	printf("Enter the second name");
	scanf("%s",&name2);
	strcat(name,name2);
	printf("%s",name);
}
