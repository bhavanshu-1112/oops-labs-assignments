#include<iostream>
#include<bits/stdc++.h>
using namespace std;

class Address{
	public:
		int hno;
		string colony;
		string city;
	Address(int x,string y,string z){
		hno =x;
        strcpy(colony,y);
        strcpy(city,z);
		
	}
	
}; 
class Person{
	string name;
	Address *p;
	public setAddress(Address *ptr){
		p = ptr;
	}
	void disp(){
//		cout<<"Address of Rahul is : "<<add1<<endl;
//		cout<<"Address of Ravi is  : "<<add1;
	}
};
int main(){
	Address add1(23,"mnit","jaipur");
	Person rahul,ravi;
	rahul.setAddress(&add1);
	ravi.setAddress(&add1);
	rahul.disp();
	ravi.disp();
	return 0;
}
