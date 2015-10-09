#include <iostream>
using namespace std;

char star(int x){
  return '*';
}

  int main(){
    int x;
    cout<<"Enter the number of * you want to print in the screen: ";
    cin>>x;

    while(x>0){
      cout<<star(x);
      x=x-1;
    }
      cout<<endl;
      return 0;
}
