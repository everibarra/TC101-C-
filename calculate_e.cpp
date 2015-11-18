#include <iostream>
using namespace std;

float euler(float b){
float x;
float R=0.0, Ref=0.0;

float factorial =1;
for (x=1; x<=b; x++){
factorial= factorial*x;
R=R+1/factorial;
}
Ref=R+1;
return Ref;
}

void newline(){
  cout<<endl;
}

int main(){
float input;
cout<<"Hi, I´m a calculator for the e constant"<<endl;
newline();
cout<<"Give me the number of decimal you want "<<endl;
newline();
cin>>input;
newline();
float factorial= euler (input);
cout<<"The constant is "<<factorial<<endl;
return 0;
 }
