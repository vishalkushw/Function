#include <iostream>
using namespace std;
int main(){
	int n ,swap;
	cout<<"Enter size of array : ";
	cin>>n;
	int arr[n];
	for(int i=0;i<n;i++){
		cout<<"Enter array index of : "<<i<<" ";
		cin>>arr[i];
	}
	cout<<"Before Swapping : ";
	
	for(int i=0;i<n;i++){
		cout<<arr[i]<<" ";
	}
	
	if(n>0){
		swap=arr[0];
		arr[0]=arr[n-1];
		arr[n-1]=swap;
	}
	cout<<"\nAfter Swapping : ";
	
		for(int i=0;i<n;i++){
		cout<<arr[i]<<" ";
}
}
