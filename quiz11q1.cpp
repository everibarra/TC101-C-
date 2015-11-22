#include <iostream> //Ever Ibarra
#include <iomanip>
using namespace std;

void newline(){
  cout<<endl;
}

double factor(int a){
double output= 1.0;
for (int i = 1; i <= a; i++){
  if (a == 0)
  return output;
  else
  output = output * i;
  }
return output;
}

double define_e(int exact){
double output1 = 0.0, output2 = 1.0;
for(int i= 1; i<1000 ; i++){
  output1 = output2;
  output2 = output1 + (1/factor(i));
}
cout << fixed << setprecision(exact) << output2 << endl;
return output1;
}
int x = 0;

int main(){
float e;
string z;
cout<<"Hi, I´m a calculator of the e constant "<<endl;
newline();
cout<<"Please insert how precisely you want this mathematical constant "<<endl;
newline();
cin>>e;
newline();
cout<<"The result equals to "<<define_e(e)<<endl;
newline();
}
return 0;
}
