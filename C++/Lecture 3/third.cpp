#include<iostream>
using namespace std;
class person{
	public:
		person(int a,int b){
			cout<<"This is your sum"<<a+b;
			}
};

main(){
	person obj(25,18);
}
