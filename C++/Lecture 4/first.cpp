#include<iostream>
using namespace std;
class person{
	public:
		person(int a,int b){
			cout<<"Sum for two numbers "<<a+b;
		}
		~person(){
			cout<<"\nSub for two numbers ";
		}
};
main(){
	person obj(25,2);
}
