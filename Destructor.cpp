#include <iostream>
 using namespace std;
class Parent{
	public:
		Parent(){
		cout<<"Parent constructor\n";
	}
   virtual ~ Parent(){
		cout<<"Parent destructor\n";
	}
};

class Child:public Parent{
	public:
		Child(){
		cout<<"Child constructor\n";
	}
    ~ Child(){
		cout<<"child Destructor\n";
	}
};

class GrandChild:public Child{
	public:
		GrandChild(){
		cout<<"Grandchild constructor\n";
	}
	
    ~ GrandChild(){
		cout<<"Grandchild Destructor\n";
	}
};


int main(){
	
	Parent *basepointer =new GrandChild;
	
	delete basepointer;
	
}
