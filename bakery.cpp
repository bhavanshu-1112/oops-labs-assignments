#include<iostream>
using namespace std;

class Bakery{
//	public:
//		virtual void show(){
//			cout<<"Cake Bakery Class"<<endl;
//		}
//		virtual void disp(){
//			cout<<"Bread Bakery Class"<<endl;
//		}
protected:
	int b =4;
	int c = 9;
		public:
		void show(){
			cout<<b<<"Bakery Class"<<endl;
		}

void disp(){
	cout<<c<<"Bakery Class"<<endl;
}
};
class Cake:public Bakery{
	public:
		void show(){
			cout<<b<< "Cake Class "<<endl;
		}
		void disp(){
			cout<<c<<"Cake Class"<<endl;
		}
};

class Bread:public Bakery{
	public:
		void show(){
			cout<<b<<"Bread Class"<<endl;
		}

void disp(){
	cout<<c<<"Bread Class"<<endl;
}
};

int main(){
//	Bakery *b;
//	Bakery bak;
//	b = &bak;
//	b->disp();
//	b->show();
	Cake c;
//	b = &c;
	c.disp();
	c.show();
	Bread br;
//	b = &br;
	br.disp();
	br.show();

return 0;
}
