// Function  Add three number
#include <iostream>
using namespace std;

 void add(int num1,int num2,int num3){   //formal parameter
	cout<<"addition:"<<num1+num2+num3<<endl;
}
int main(){
	int number1,number2,number3;
	cout<<"Enter three number :";
	cin>>number1>>number2>>number3;
	add(number1,number2,number3);    //actual parameter
	
}
