#include<iostream>
using namespace std;
class Base{
public:
    void show(){
    cout<<"Base class with show function"<<endl;}
    virtual void disp(){
        cout<<"Base class with display function"<<endl;
    }
};
class Derived:public Base{
void show(){
cout<<"Derived class with show"<<endl;
}
void disp(){
cout<<"Derived class with display"<<endl;
}
};
int main(){
Base *b;
Derived d;
b = &d;
b->show();
b->disp();
return 0;
}


