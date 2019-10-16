#include <iostream>
#include <fstream>
using namespace std;
int main()
{
    string strReplace = "GOODBYE"; 
    string strNew = "Bye";	
    ifstream filein("test1.txt");
    ofstream fileout("temp.txt"); 
//    if(!filein || !fileout) 
//	{
//        cout << "Error opening files!" << endl;
//        return 1;
      // }
    string strTemp;
 while(filein >> strTemp)
    {
        if(strTemp == strReplace)
		{
            strTemp = strNew;
        }
        strTemp += "\n";
        fileout << strTemp;
    }
    return 0;
}
