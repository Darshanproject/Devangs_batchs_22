#include<iostream>
using namespace std;
class person{
	int age;
	string name;
	public:
		void setAge(int age){
			this->age=age;
		}
		int getAge(){
			return age;
		}
		void setName(string name){
			this->name=name;
		}
		string getName(){
			return name;
		}
};

int main(){
	person obj;
	obj.setAge(25);
	obj.setName("Devang");
	cout<<obj.getAge()<<"\n";
	cout<<obj.getName();
}
