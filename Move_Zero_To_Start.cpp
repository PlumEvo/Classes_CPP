#include <iostream>
using namespace std;

void MoveZeroStart(int arr[], int n);
void PrintArray(int arr[] , int n);

int main(){
	
	int arr[] = {1, 9, 8, 4, 0, 0, 2, 7, 0, 6, 0};
	int n = sizeof(arr)/sizeof(arr[0]);
	
	PrintArray(arr,n);
	MoveZeroStart(arr,n);
	PrintArray(arr,n);
	
	return 0;
}

void MoveZeroStart(int arr[] , int n){
	int c = n-1;
	for(int i = n-1 ; i >= 0 ; i--)
		if(arr[i]!=0){
			swap(arr[i],arr[c]);
			c--;
		}
	return;
}

void PrintArray(int arr[] , int n){
	for(int i = 0 ; i < n ; i++)
		cout << arr[i] << " ";
	cout << endl;
	return;
}

