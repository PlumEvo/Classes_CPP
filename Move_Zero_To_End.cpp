#include <iostream>
using namespace std;

void MoveZero(int arr[],int n);
void PrintArray(int arr[],int n);

int main(){
	
	/*Given an array of random numbers, Push all the zero's of a
	given array to the end of the array. For example, if the 
	given arrays is {1, 9, 8, 4, 0, 0, 2, 7, 0, 6, 0}, 
	it should be changed to {1, 9, 8, 4, 2, 7, 6, 0, 0, 0, 0}. 
	The order of all other elements should be same. 
	Expected time complexity is O(n) and extra space is O(1).*/
	
	int arr[] = {1, 9, 8, 4, 0, 0, 2, 7, 0, 6, 0};
	int n = sizeof(arr)/sizeof(arr[0]);
	
	PrintArray(arr,n);
	MoveZero(arr,n);
	PrintArray(arr,n);
	
	return 0;
}

void PrintArray(int arr[] , int n){
	for(int i = 0 ; i < n ; i++)
		cout << arr[i] << " ";
	cout << endl;
}

void MoveZero(int arr[] , int n){
	int c = 0;
	for(int i = 0 ; i < n ; i++)
		if(arr[i]!=0){
			swap(arr[i],arr[c]);
			c++;	
		}
}


