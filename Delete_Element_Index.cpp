#include <iostream>
using namespace std;

void PrintArray(int arr[],int n){
	cout << "Given Array : " << endl;
	for(int i = 0 ; i < n ; i++)
		cout << arr[i] << " ";
	cout << endl;
}

int main(){
	
	/***|| Deletion in an Array ||***/
	
	int arr[10] = {1,2,3,4,5,6,7,8,9,10};
	int n = sizeof(arr)/sizeof(arr[0]);
	PrintArray(arr,n);	
	
	int ind;
	cout << "Enter Index : ";
	cin >> ind;
	
	for(int i = ind ; i < n-1 ; i++){
		arr[i] = arr[i+1];
	}	
	arr[n-1] = 0; //Empty Last Element
	PrintArray(arr,n);	
	
	return 0;
}
