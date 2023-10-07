#include<iostream>
using namespace std;
class Person{
	public:
		void display(int a,int b){
			cout<<"This is person class method 1 "<<a+b<<endl;
		}
		void display(double a,double b){
			cout<<"This is person class method 2 "<<a+b<<endl;
		}
};

int  main(){
	Person obj;
	obj.display(2,2);
	obj.display(2.5,2.2);
}
