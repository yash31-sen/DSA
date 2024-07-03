/*
exceptions:
they are unexpected events that arise during the smooth execution of program
it leads to issues and odd behaviours in the program

exception handling provides a way to handle these exceptions
exception handling provides a mechanism through which we can handle the error generating part seperately from the rest of the program

the exceptions are handled with the help of 3 keywords in cpp:
1) try{} // this part assumes that error woll take place
            try block can have multiple catch blocks
            the exceptions thrown by try block will catch by the catch block
2) catch(exception_name exception1){}  // catches the exception thrown from the try block
                                        handling the exception is the actual job of catch block
                                    both try and catch block work together, try block must have atleast one catch block
3) throw  //throw statment is used to throw and exception and its values to perticular exception handler






Exceptions can be user defined and system generated 
*/

#include<iostream>
using namespace std;


int main(){
    // int age=20;
    // try{
    //     if(age>=24){
    //         cout<<"yes you are eligible";
    //     }
    //     else{
    //         throw(age);
    //     }
    // }
    // catch(int age){
    //     cout<<"you can't access it due to less age"<<endl;
    //     cout<<"your age is: "<<age;
    // }



    //example 2
    int num=10;
    int denom=2;
    float op=-1;
    try{
        if(denom==0){
            throw denom;
        }
        else{
            op=num/denom;
        }
    }
    catch(int d){
        cout<<"you can't divide anything by 0"<<endl;
    }
cout<<"the result is: "<<op;
    return 0;
}