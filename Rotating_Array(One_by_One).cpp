#include <iostream>
using namespace std;

void PrintArray(int arr[] , int n){
	cout << "\nGiven Array : ";
	for(int i = 0 ; i < n ; i++)
		cout << arr[i] << " ";
	cout << endl;
}

int main(){
	
	int arr[]={1,2,3,4,5,6,7,8,9};
	int n = sizeof(arr)/sizeof(arr[0]);
	PrintArray(arr,n);
	
	int d = 3; //Number of rotation 
	
	/***|| Method 2 - One by One Moving ||***/
	
	
	while(d--){
		int temp = arr[0];
		for(int i = 0 ; i < n-1 ; i++)
			arr[i] = arr[i+1];
		arr[n-1] = temp;
	}
	
	PrintArray(arr,n);
	
	return 0;
}
