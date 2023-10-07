#include<iostream>
using namespace std;
class person{
	public:
		void display(){
			cout<<"This is prent class"<<endl;
		}
};
class person1: public person{
	public:
		void display1(){
			cout<<"This is child class ";
		}
};

main(){
	person1 obj;
	obj.display();
	obj.display1();
}
