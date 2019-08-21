#include<iostream>
using namespace std;

class Rect{
	private:int length,breadth;
	public :
		Rect(int ,int);
		int area(){
			return length*breadth;
			
		}
		int length1(){
			return length;
			
		}
		int breadth1(){
			return breadth;
			
		}
};

Rect::Rect(int l, int b){
	length = l;
	breadth = b;
	
}

   int main(){
	Rect r(10,20);
	Rect r1(r);
	cout<<"length of rectangle : "<<r1.length1()<<"\n";
	cout<<"breadth of rectangle : "<<r1.breadth1()<<"\n";
	cout<<"area of rectangle : "<<r1.area()<<endl;
	return 0; 
}
