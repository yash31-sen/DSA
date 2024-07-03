// #include<bits/stdc++.h>
// using namespace std;

// class A{
// public:
// int a=1;
//  void operator ++(){
//       a=a+5;
//  }
// };

// int main(){
// A b;
// ++b;

// cout<<b.a;
//     return 0;
// }




#include<bits/stdc++.h>
using namespace std;

class Complex{
public:

int real;
int imag;
void input(int a, int b){
    real=a;
    imag=b;
}

Complex operator +(Complex obj){
    Complex temp;

    temp.real=real+obj.real;
    temp.imag=imag+obj.imag;

    return temp;
}

void output(){
    cout<<"Complex number is: "<<real<<" + "<<imag<<" i.";
}
};

int main(){
Complex a,b,c;

a.input(2,4);
b.input(1,2);
c=a+b;
c.output();

    return 0;
}