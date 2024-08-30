#include <iostream>
using namespace std;

class Bank{
	private:
		int balance;
		string name;
	public:
	  Bank(int bal,string nm)	{
	  	balance=bal;
	  	name=nm;
	  }
	  void display(){
	  	cout<<"Name : "<<name<<" Balance : "<<balance<<endl;
	  }
	  friend class PhonePe;
};

class PhonePe{
	public:
		void deposite(Bank &obj,int amount){
			obj.balance=obj.balance+amount;
		}
		
		void withdraw(Bank &obj,int amount){
			obj.balance=obj.balance-amount;
		}
};

int main(){
	Bank obj(40000,"vishal");
	obj.display();
	PhonePe obj_phonepe;
	obj_phonepe.deposite(obj,8000);
	obj.display();
	obj_phonepe.withdraw(obj,3000);
	obj.display();
}
