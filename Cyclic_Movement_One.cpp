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
	
	int arr[]={0,1,2,3,4,5,6,7,8,9};
	int n = sizeof(arr)/sizeof(arr[0]);
	PrintArray(arr,n);
	
	/***|| Cyclic Movement in Array - One Element ||***/
	
	//i.e Move array left
	int temp = arr[n-1]; //Save last element 
	for(int i = n-1 ; i > 0 ; i--) //Start from back
		arr[i] = arr[i-1];
	arr[0] = temp;
	
	PrintArray(arr,n);
	
	return 0;
}
