#include <iostream>
using namespace std;

int add(){
	int num1,num2,sum;
	cout<<"enter number1: ";
	cin>>num1;
	cout<<"enter number2: ";
	cin>>num2;
	sum=num1+num2;
	return sum;
	
//	cout<<"sum : "<<num1+num2;

	
}

int main(){
int sum=	add();
cout<<sum;
	
}
