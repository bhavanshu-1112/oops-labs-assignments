#include<iostream>
using namespace std;
class A{
	public:
		int x=2,y=4;
		void f(int x,int y){
			cout<<x<<" "<<y<<endl;
		}
        void f(int x){
        	cout<<x<<endl;
		}

};
//class B{
//	public:
//		int y =5;
//		void f(int x){
//			cout<<x<<" "<<y<<endl;
//		}
//};

int main(){
	A a;
	a.f(5,6);
	a.f(5);
}
