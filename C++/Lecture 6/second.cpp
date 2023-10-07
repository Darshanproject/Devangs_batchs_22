#include<iostream>
using namespace std;
class person{
	public:
		void dispaly(){
			cout<<"Human can walk"<<endl;
		}
};


class boy:public person{
	public:
		void dispaly(){
			cout<<"Boy can run"<<endl;
		}
};


int main(){
	boy obj;
	obj.dispaly();
	obj.person::dispaly();
	return 0;
}


