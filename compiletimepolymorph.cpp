#include<iostream>
using namespace std;
class A{
	int a,b;
//	void input(){
//		
//	}
//void getdata(int l,int h){
//	a = l;
//	b =h;
//}
public:
void area(int l,int h){
   cout<<"Area of rectangle 1: "<<l*h<<endl;	
}
void area(int h){
	int l = 3;
	cout<<"Area of rectangle 2: "<<l*h<<endl;
}
};

int main(){
	A r1;
	A r2;
//	r1.getdata();
//	r2.getdata();
	r1.area(1);
	r2.area(2,3);
	return 0;
}
