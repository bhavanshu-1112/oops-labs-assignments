#include<iostream>
using namespace std;

class Shape{
	public:
		int l,b,s;
		virtual int rectangle(int l,int b) = 0;
		virtual int square(int s) = 0;
};
class Area:public Shape{
	public:
		int rectangle(int l,int b){
			return l*b;
		}
		int square(int s){
			return s*s;
		}
};

int main(){
	Shape *sh;
	Area a;
	sh = &a;
	cout<<"Area of rectangle is : "<< sh->rectangle(2,3)<<endl;
	cout<<"Area of square is : "<<sh->square(4)<<endl;
	return 0;
}
