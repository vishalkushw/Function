// passing array as a parameter  in a function
#include <iostream>
using namespace std;

void arr(int a[] ,int s){
//void arr(int *a ,int s){	
	for (int i=0;i<s;i++){
	
	cout<<a[i]+1<<"\t";
}
}
int main(){
	int x[]={2,3,4,6,7,8};
	int s=sizeof(x)/sizeof(x[0]);
	arr(x,s);
	cout<<"\n";
//	cout<<x[i]<<"\t";
}