/*
Syntax :
datatype function_name(){   function decleration
function body;  function body
}
main(){
function_name(); calling function

}
*/

#include<stdio.h>
void sum();//pre define function
main()
{
	printf("This is my main Function");
	sum();//function calling
}
void sum(){  //function
	printf("\nFunction has been called"); //function body
}
