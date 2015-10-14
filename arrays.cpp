#include <iostream>
#include <math.h>
using namespace std;

float aver(float x){
  return (x/10);
}

int main (){
	float array1[10];
	float suma=0;
	float square=0, deviation;
	for (int i=0; i<10; i++)
	{
		cout<<"Introduce the numerical value "<<(i+1)<<" : "<<endl;
		cin>>array1[i];
	}

	for (int i=0; i<10; i++)
	{
	suma+=array1[i];
	square+=(array1[i])*(array1[i]);
	}
	deviation=sqrt(square/10);
	cout<<"The addition equals to: "<<suma<<endl;
	cout<<"The average of the numbers you introduce is: "<<aver(suma)<<endl;
	cout<<"The standard deviation of the numbers you introduce is: "<<deviation<<endl;
}
