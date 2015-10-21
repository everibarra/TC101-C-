#include <iostream>
#include <vector> //Ever Ibarra Almaral TC1017
using namespace std;

void newline(){
  cout<<endl;
}

double sumsquares_list (vector<double> vector){
  double a = vector.size();
  double sum=0;
  for(double i=0; i<a; i++){
    sum=sum+(vector[i]*vector[i]);
  }
  return sum;
}

int main (){
  double x;
  vector<double>vector (0, 4); //You assign a size for your vector.
  cout<<"Hi, I´m a calculator of the addition of squares of the numbers you´ll give me "<<endl;
  newline();
  cout<<"introduce the number (to stop introducing numbers write-->-42)"<<endl;
  newline();
  cin>>x;
  newline();
  while(x!=-42){
    newline();
    cout<<"introduce the next number "<<endl;
    newline();
  vector.push_back(x); //You´re increasing the size of the vector
  cin>>x;
  }
  cout<<"The result equals to "<<sumsquares_list(vector)<<endl;
  return 0;
}
