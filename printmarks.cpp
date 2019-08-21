#include<iostream>
using namespace std;

class Student{
	private:
		int sub1,sub2,sub3;
	public:
	void inp(){
		cout<<"Enter marks of subject1 :" <<endl;
		cin>>sub1;
		cout<<"Enter marks of subject2 :" <<endl;
		cin>>sub2;
			cout<<"Enter marks of subject3 :" <<endl;
		cin>>sub3;
	}
	void display(){
		cout<<"MArks of student  : "<<sub1<<" " << sub2<<" "<<sub3<<" ";
	}
	
};

int main(){
	Student s1;
	Student s2;
	Student s3;
	Student s4;
	Student s5;
	Student s6;
	Student s7;
	Student s8;
	Student s9;
	Student s10;
	
	s1.inp();
	s1.display();
		s2.inp();
	s2.display();
		s3.inp();
	s3.display();
		s4.inp();
	s4.display();
		s5.inp();
	s5.display();
		s6.inp();
	s6.display();
		s7.inp();
	s7.display();	
	s8.inp();
	s8.display();	
	s9.inp();
	s9.display();
		s10.inp();
	s10.display();
	return 0;

}
