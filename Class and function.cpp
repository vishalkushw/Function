#include <iostream>
using namespace std;

class School{
	private:
		string school_name;
		int clas;
		
	public:
		School(string sn ,int cl){
			school_name=sn;
			clas=cl;
		}
	
		void getdata(){
			cout<<"school name:"<<school_name<<endl;
			cout<<"class:"<<clas;
		}
};
int main(){
	School sc("sam",12);
	sc.getdata();
	
}
