#include <iostream>
using namespace std;
int main(){
	int  num,dino;
	try{
		cout<<"enter numerater:";
		cin>>num;
		cout<<"enter denominater:";
		cin>>dino;
		if(dino==0){
			throw dino;
		}
		cout<<"Division:"<<num/(double)dino<<endl;
	}
	
	catch(int args){
		cout<<"you enter dinominater as "<<args<<endl;
		cout<<"dinominater can't be zero";
	}
	
}
