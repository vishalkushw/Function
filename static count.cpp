#include <iostream>
using namespace std;

class Bank{
	private:
		int balance;
		string name;
		static int count;
	public:
	  Bank(int bal,string nm)	{
	  	balance=bal;
	  	name=nm;
	  	count++;
	  }
	  void display(){
	  	cout<<"Name : "<<name<<" Balance : "<<balance<<endl;
	  }
	  static void number_customber(){
     	cout<<count;
  }
	  

};

int Bank::count=0;
  
int main(){
	Bank obj(40000,"vishal"),obj1(3000,"vsk");
	obj.display();
	Bank::number_customber();	
}

