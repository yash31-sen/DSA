/*as cpp is object orieneted language we will use classes for doing file handeling in cpp

#include<fstream>//used for file handing in cpp

some usefull classes for file handling in cpp
1)fstreambase //it is an base class
2)ifstream //it is derived from fstreambase         || used for read operation
3)ofstream // it is also derived from fstreambase   || used for write operation

In order to work with files in cpp there are two ways to do it
1)using constructor
2) using the member function open() of the class

*/

#include <iostream>
#include <fstream>
#include<string>

using namespace std;

int main()
{
    //openinig file through constructor and writting on it 
    // ofstream out("sample.txt"); //out is object of ofstream class can be named anything || we canuse fstream direclty also as ofstream is derived from fstreambase class
    // string s = "someone this one";
    // out << s;//for writting to file
    //this process removes the content if already there in file and stores the newly wrriten content to it
// out.close()

    //openinig file through constructor and reading it 
    // string s1;
    // ifstream in("sample.txt");// we canuse fstream direclty also as ifstream is derived from fstreambase class
    // // in>>s1; // it stops reading after one space or newline for getting complete text use:
    // getline(in,s1);
    // cout<<s1;
    // in.close();

//************************************************* */
//other way to write to the file
// ofstream out1;
// out1.open("sample.txt");
// out1<<"hello this is yashsen ";
// out1<<"hello i am yashsen";
// out1.close();

//*************************************************** */
// other way of reading the file:
ifstream in1;
string s1,s2;
in1.open("sample.txt");
// in1>>s1>>s2;//first word of file stored in s1 and 2nd in s2
// cout<<s1<<s2;
while(in1.eof()==0){
    getline(in1,s1);
    cout<<s1;
}//reading complete file
in1.close();

    return 0;

}