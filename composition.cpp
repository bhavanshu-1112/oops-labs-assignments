// composition is strong form of aggregation
// this is a relationship between owner or whole and part 
// life time of part(B) is dependent on life time of whole(A)
// eg house- room
// question - option
#include<iostream>
#include<bitss.stdc++.h>
using namespace std;

class Option{
	string smt;
	
};
class Question{
	int qno;
	Option *a,*b,*c,*d;
    public:
    	Question(){
    	a = new Option();
    	b = new Option();
    	c= new Option();
    	d = new Option();
    		
		}
		~Question(){
			delete a;
			delete b;
			delete c;
			delete d;
		}
};
int main(){
	Question q1;
}
