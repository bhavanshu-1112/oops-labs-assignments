#include<iostream>
using namespace std;

class D{
	public: 
	int *ptr;
	
D(){
    ptr= new int;
	*ptr =100;
}
	 void disp(){
	     cout<< *ptr;
	 }
};



int main(){
	D d;
	  d.disp();
}
