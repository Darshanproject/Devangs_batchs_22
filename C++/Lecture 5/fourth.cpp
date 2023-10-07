#include<iostream>

using namespace std;
class A{
	public:
		void dis(){
			cout<<"This is a Class"<<endl;
		}
};

class B:public A{
	public:
		void dis1(){
			cout<<"This is B Class"<<endl;
		}
};

class C:public A{
	public:
		void dis2(){
			cout<<"This is C class"<<endl;
		}
};

class D:public A{
	public:
		void dis3(){
			cout<<"This is D class";
		}
};
main(){
	B obj1;
	obj1.dis();
	obj1.dis1();
	C obj;
	obj.dis();
	obj.dis2();
	D obj2;
	obj2.dis();
	obj2.dis3();
	
	
	
	
	
}
