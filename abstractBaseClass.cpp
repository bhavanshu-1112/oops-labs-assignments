#include<iostream>
using namespace std;

class Base{
	protected:
		int x=9,y=3;
	public:
		virtual int getXY() = 0;
//		void getX(int xi){
//			x = xi;
//			
//		}
//		void getY(int yi){
//			y = yi;
//		}
//		
};

class Derived:public Base{
	public:
		int getXY(){
	         cout<<x<<" "<<y<<endl;
		}
};

int main(){
	Base *b;
	
	Derived d;
	b = &d;
//	b.getX(3);
//	cout<<b.getXY()<<endl;
//	b.getY(4);
	//cout<<b.getXY()<<endl;
	b->getXY();
	return 0;
}
