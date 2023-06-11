#include <bits/stdc++.h>
using namespace std;

void PrintArray(int arr[] , int n){
	for(int i = 0 ; i < n ; i++)
		cout << arr[i] << " ";
	cout << endl;
}

void SubSequence(int arr[] , int n){
	unsigned int opsize = pow(2,n);
	for(int i = 1 ; i < opsize ; i++){
		for(int j = 0 ; j < n ; j++){
			if(i&(1<<j))
				cout << arr[j] << " ";
		}
		cout << endl;
	}
}

int main(){
	
	int arr[] = {1,2,3,4};
	int n = sizeof(arr)/sizeof(arr[0]);
	PrintArray(arr,n);
	cout << endl;
	SubSequence(arr,n);
	
	
	return 0;
}
