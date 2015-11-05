#include <iostream> //  Ever Ibarra Almaral
using namespace std;

void newline(){
  cout<<endl;
}

int common(int first, int second)
{
	if (first==second)
	{
		return first;
	}
	else if (first>second)
	{
		return common(first-second, second);
	}
	else
	{
		return common(first, second-first);
	}
}

int main ()
{
	int x,y;
  cout<<"Hello, I´m a calculator of the greatest common divisor from two numbers. "<<endl;
  newline();
  cout<<"Enter the first number."<<endl;
  newline();
	cin>>x;
  newline();
  cout<<"Enter the second number. "<<endl;
  newline();
  cin>>y;
  newline();
	cout<<"The greatest common divisor from "<<x<<" and "<<y<<" is "<<common(x,y)<<endl;
	return 0;
}
