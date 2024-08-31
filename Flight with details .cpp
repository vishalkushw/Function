#include <iostream>
using namespace std;
class Flight{
	private:
	 int filght_number;
	 string	departure_city;
	 string	destination_city;
	 string departure_time;
	 int price;
		
		public:
			
		Flight(int fn,string dep_ct,string des_ct,string tm,int pr){
			
	     filght_number=fn;
	     departure_city=dep_ct;
	     destination_city=des_ct;
	     departure_time=tm;
	     price=pr;
		}
		void getFlightDetails(){
			cout<<"Flight number :"<<filght_number<<endl;
			cout<<"Departure city :"<<departure_city<<endl;
			cout<<"Destination city :"<<destination_city<<endl;
			cout<<"Time :"<<departure_time<<endl;
			cout<<"Price :"<<price<<endl;
			cout<<"\n";
			}
			
		void update_time(string new_time){
			 departure_time=new_time;
		}	
};
int main(){
	Flight fl(101,"bhopal","indore","8 pm",3400);
	fl.getFlightDetails();
	fl.update_time("8:45 pm");
	fl.getFlightDetails();
	
}
