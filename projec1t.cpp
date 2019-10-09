#include<iostream>
using namespace std;
class Vehicle{
	public:
		virtual void speed(){
			cout<<"In speeed of veicle"<<endl;
		}
		virtual void maintainence(){
			cout<<"In maintainence of vehicle";
			cout<<endl;
		}
		void value(){
			cout<<"In value of vehicle";
				cout<<endl;
		}
};
class fourwheeler:public Vehicle{
	public :
		void speed(){
			cout<<"In speed of fourwheeler";
				cout<<endl;
		}
		void maintainence(){
			cout<<"In maintainence of fourwheeler";
			
				cout<<endl;
		}
		
};
class twowheeler:public Vehicle{
	public:
		void speed(){
			cout<<"In speed of twowheeler";
				cout<<endl;
		}
		void maintainence(){
			cout<<"In maintainence of twowheeler";
				cout<<endl;
		}
		void value(){
			cout<<"In value of twowheeler";
				cout<<endl;
		}
};
class airborne:public Vehicle{
	public:
		void speed(){
			cout<<"In speed of airborne";
			cout<<endl;
		}
};
int main(){
	 Vehicle v,*v1;
	 fourwheeler f;
	 twowheeler t;
	 airborne a;
	 v1 = &v;
	 v1->speed();
	 v1->maintainence();
	 v1->value();
	 
	 v1 = &f;
	 v1->maintainence();
	 v1->speed();
	 
	 v1 = &t;
	 v1->speed();
	 v1->maintainence();
	 
	 v1 = &a;
	 v1->speed();
	 v1 = &v;
	 v1->maintainence();
	 v1->value();
	 v1->value();
	 v1->speed();
	 v1 = &f;
	 v1->speed();
	 v1 = &v;
	 v1->maintainence();
}
