#include <iostream>
using namespace std;

int  sbi(int code,int psw){
	return 1000;

}
int  axis(int code,int psw){
	return 2000;

}

int main(){
	int (*atm)(int ,int);  //function pointer we can not use variable
	
	//datatype (*functionname)(datatype , datatype)
	atm=sbi;
	cout<<"min balance of sbi="<<atm(1001,1234)<<"\n";
	
	atm=axis;
	cout<<"min balance of axis="<<atm(2001,4567)<<"\n";
	
}
