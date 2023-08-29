#include<stdio.h>
#include<string.h>
main(){
	char name[20],name2[20];
	printf("Enter the name");
	scanf("%s",&name);
	printf("Enter the second name :");
	scanf("%s",&name2);
	strrev(name);
	strrev(name2);
	printf("\n %s",name);
	printf("\n %s",name2);
}
