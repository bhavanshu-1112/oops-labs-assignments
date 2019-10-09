#include<iostream>
using namespace std;

class Base{
	public:
		int x = 3;
		int y =4;
		int z = 5;
};
class Derived1:public Base{
	public:
		void f1(){
			cout<<"x : "<<x*x<<endl;
				cout<<"x : "<<x*x*x<<endl;
		}
		
};
class Derived2:public Base{
	public:
		void f2(){
			cout<<"y : "<<y*y<<endl;
			cout<<"y : "<<y*y*y<<endl;
		}
};
class Derived3:public Base{
	public:
		void f3(){
			cout<<"z : "<<z*z<<endl;
			cout<<"z : "<<z*z*z<<endl;
		}
};
int main(){
	Base b;
	Derived1 d1;
	d1.f1();
	Derived2 d2;
	d2.f2();
	Derived3 d3;
	d3.f3();
	
}
