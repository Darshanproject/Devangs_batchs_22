#include<iostream>

using namespace std;
class A{
	public:
		void dis(){
			cout<<"This is a Class"<<endl;
		}
};

class B{
	public:
		void dis1(){
			cout<<"This is B Class";
		}
};

class C:public A ,public B{
	
};

main(){
	C obj;
	obj.dis();
	obj.dis1();
	
	
	
	
}
