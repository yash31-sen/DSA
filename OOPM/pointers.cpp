/*
pointers in cpp:
pointers are variables that stores the address of other variable
int p=10; //normal variable;
int *a; //pointer variabe
*a=&p// & refference opeartor || pointer a stores teh addres of p;
*a // dereferencing operator
p=&a;//p=&a and *p=a are same
by using pointer we can access the variables as well as we can modify them 


pointer arithmetic:
inc,dec,+,-
int *ptr=&a;// *ptr=2000
ptr++; //after ptr++ 2004 (as integer takes 4bytes)


poniters in arrays:
when we declare any array then we got one pointer (same name as array) pointing to the zeroth element of array, if arr[]  then pointer is arr, it is constant we can't mdimodify its value directly
arr is index pointer so on incrementing it go to next index no to next memory location
int arr[]={1,20,3,4,5};
can't do arr++ can do arr+1(index 1), arr+2(index 2) etc
int *p=arr;
//p++;//this will does not inc the value at perticular index
*p+=1;//this will increment the value at pertcular index
cout<<*p;




*/

#include<iostream>
using namespace std;
// void swap1(int *a,int *b){
//     int temp=*a;
//     *a=*b;
//     *b=temp;
// }
// int main(){
// int a =10;
// int b=23;
// swap1(&a,&b);
// cout<<a<<" "<<b;
// }


int main(){

int a=10;
int * ptr=&a;
*ptr+=1;
cout<<*ptr;

    return 0;
}