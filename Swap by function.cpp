#include <iostream>
using namespace std;

void swap(int a ,int b){
	a=a+b;
	b=a-b;
	a=a-b;
	cout<<"After swapping "<<"\n";
	cout<<"Value of a = "<<a<<"\n";
	cout<<"Value of b = "<<b<<"\n";
}
int main(){
	int x,y;
	cout<<"Enter two number : ";
	cin>>x>>y;
	cout<<"Before swapping "<<"\n";
	cout<<"Value of x = "<<x<<"\n";
	cout<<"Value of x = "<<y<<"\n";
	swap(x,y);
}
