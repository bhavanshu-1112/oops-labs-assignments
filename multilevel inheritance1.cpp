#include<iostream>
using namespace std;

class Student{
	protected:
		int roll =12;
		Student(){
			cout<<"Roll No. is : "<<roll<<endl;
		}		
};
class Subject:public Student{
protected:
   int sub1 = 23,sub2 = 34,sub3 = 45;
   public:
   Subject(){
   	cout<<"Marks in subject 1 :  "<<sub1<<endl;
   cout<<"Marks in subject 2 :  "<<sub2<<endl;
   cout<<"Marks in subject 3 :  "<<sub3<<endl;
   }
   
};
class Total:public Subject{
	protected:
		int total;
		public:
		Total(){
			total = sub1 + sub2 + sub3;
			cout<<" Total Marks of student of roll No: "<< roll<<" is" << total<<endl;
		}
}; 
int main(){
	Subject s;
	Total t;
	return 0;
}
//#include<iostream>
//using namespace std;
//class class1
//{
//	
//	protected:
//	    int maths,science,opps;
//	public:
//		void sub(int m,int s,int c)
//		{
//			maths=m;
//			science=s;
//			opps=c;
//		}
//		int returns()
//		{
//			return maths,science,opps;
//		}
//};
//class class2:public class1
//{
//	protected:
//		int total,rollno;
//	public:
//		void re(int r)
//		{
//			rollno=r;
//		}
//		int a()
//		{
//			return rollno;
//		}
//		
//		void totals()
//		{
//			total=maths+science+opps;
//		}
//		int returnss()
//		{
//			return total;
//		}
//};
//class class3:public class2
//{
//	private:
//		int ROLLNO,TOTAL;
//	public:
//		void rol()
//		{
//			ROLLNO=rollno;
//			cout<<"Rollno is:"<<ROLLNO<<endl;
//		}
//		
//		void totalmarks()
//		{
//			TOTAL=class2::total;
//			cout<<"Total marks is :"<<TOTAL;
//		}
//		
//};
//int main()
//{
//	class3 c3;
//	c3.sub(70,80,65);
//	c3.returns();
//	c3.re(1129);
//	c3.a();
//	c3.totals();
//	c3.returnss();
//	c3.rol();
//	c3.totalmarks();
//	return 0;
//	
//}
