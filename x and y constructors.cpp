#include<iostream>
using namespace std;

class Base{
	protected:
	int x;
		Base(){
			x = 5;
			cout<<"x = "<<x<<endl;
		}
};
class Derived:public Base{
//	public:int y;
//	Derived(int yval){
//		y = yval;
//	}
private:
	int y;
public:
	
	Derived(){
//		cout<<xval<<" "<<yval<<endl;
       

        y=9;	
		cout<<"y = "<<y<<endl;}
	
};

int main(){
//	Base b(5,6);
//	Derived d(6);
	Derived d ; 
//	d.show();
	return 0;
}
