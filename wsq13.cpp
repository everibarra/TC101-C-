#include <iostream>
using namespace std;

double babylonian(double number) {
 double failure= 0.00001;
 double x= number;
 while((x - number/x) > failure) {
 x = (x + number/x)/2;
 cout<<"The intermediate result is " << x <<endl;
 }
 return x;
}

void newline(){
  cout<<endl;
}

int main() {
 double num;
 cout<<"Hi, I´m a calculator of the square root of a number using the babylonian method"<<endl;
 newline();
 cout<<"Introduce the number "<<endl;
 newline();
 cin>>num;
 double result = babylonian(num);
 cout<<"The square root of "<<num<<" equals to "<<result<<endl;

 return 0;
}
