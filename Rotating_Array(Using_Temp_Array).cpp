#include <iostream>
using namespace std;

void PrintArray(int arr[] , int n){
	cout << "\nGiven Array : ";
	for(int i = 0 ; i < n ; i++)
		cout << arr[i] << " ";
	cout << endl;
}

int main(){
	
	/***|| Rotation of Array ||***/
	
	int arr[]={1,2,3,4,5,6,7,8,9};
	int n = sizeof(arr)/sizeof(arr[0]);
	PrintArray(arr,n);
	
	int d = 3; //Number of rotation 
	
	/***|| Method 1 - Temp Space ||***/
	
	int temp[d];
	
	//Copy into Temp Array
	for(int i = 0 ; i < d ; i++)
		temp[i] = arr[i];
	
	//Shift Elements by d index
	for(int i = 0 ; i < n-d; i++)
		arr[i] = arr[i+d];
	
	//Replace last d elements using temp array
	for(int i = 0 ; i < d ; i++)
		arr[i+(n-d)] = temp[i];
	
	PrintArray(arr,n);
	
	return 0;
}
