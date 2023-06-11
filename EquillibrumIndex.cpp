#include <iostream>
using namespace std;

int EquillibrumIndex(int arr[] , int n){
	for(int i = 0 ; i < n ; i++){
		int sumleft = 0 , sumright = 0;
		for(int j = 0 ; j < i ; j++)
			sumleft+=arr[j];
		for(int j = i+1 ; j < n ; j++)
			sumright+=arr[j];
		if(sumleft==sumright)
			return i;
	}
	return -1;
}

void PrintArray(int arr[] , int n){
	for(int i = 0 ; i < n ; i++)
		cout << arr[i] << " ";
	cout << endl;
}

int main(){
	
	int arr[] = {1,2,1,4,3,-7};
	int n = sizeof(arr)/sizeof(arr[0]);
	
	PrintArray(arr,n);
	int Eqindex = EquillibrumIndex(arr,n);
	cout << "Equillibrum Index : " << Eqindex << endl;
	
	
	
	return 0;
}
