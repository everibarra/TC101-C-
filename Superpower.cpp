#include <iostream>
using namespace std;

long superpower(long a, long b){
  long total=1;
  for(int i=0; i<b; i++){
  total = total*a;
  }
  return total;
}

int main(){
long a;
long b;
cout<<"Hello, I´m a calculator of exponencial numbers "<<endl;

cout << "Enter a number: ";

cin >> a;

cout << "Raise first number to the power of: ";

cin >> b;

cout<<"The result equals to "<<superpower(a, b)<<endl;

return 0;

}
