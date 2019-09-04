#include<iostream>
#include<string.h>
using namespace std;

class Animal{
public:
string color = "Black";
void show(){
		cout<<color<<endl;
}

};

class Dog:public Animal{
	public:
	string color = "White";
void show(){
		cout<<color<<endl;
}
};
int main(){
	Animal *a = new Animal();
	Animal b;
	//b = a;
	b.show();
	Dog *d = new Dog();
	b = d;
	b->show();
	return 0;
}
