#include<iostream>
#include<string>
#include<fstream>
using namespace std;

int main()
{
    ofstream fout;  
    ifstream fin;
    fin.open("a.txt");
    fout.open ("a.txt",ios::app); 
//    if(fin.is_open())
    fout<< "\n Hi! Writing to a file opened from program.\n";
    cout<<"\n Data has been appended to file";
    fin.close();
    fout.close(); 
    return 0;
}
