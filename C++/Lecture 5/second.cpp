#include<iostream>
using namespace std;
class A{
	public:
		void display(){
			cout<<"This is a class"<<endl;
		}
};


class B: public A{
	public:
		void display1(){
			cout<<"This is b class"<<endl;
		}
};
class C:public B{
	
};

main(){
	C obj;
	obj.display();
	obj.display1();
}







