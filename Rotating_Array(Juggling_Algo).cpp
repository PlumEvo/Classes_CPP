#include <iostream>
using namespace std;

int gcd(int a , int b){
	if(b==0)
		return a;
	return(b,a%b);
}

void PrintArray(int arr[], int n){
	cout << "\nGiven Array : ";
	for(int i = 0 ; i < n ; i++)
		cout << arr[i] << " ";
	cout << endl;
}


int main(){
	
	int arr[] = {0,1,2,3,4,5,6,7,8,9};
	int n = sizeof(arr)/sizeof(arr[0]);
	PrintArray(arr,n);
	int d = 3;
	
	/***|| Method 3 - Juggling Array ||***/
	
	const int s = gcd(n,d);
	
	for(int i = 0 ; i < s ; i++){ //No of Moves
		
		int temp = arr[i]; //Copy First element in set
		int j = i; //for indexing
		
		while(1){
			int k = j + d; //move copying cursor
			
			if (k >= n)
				k = k -n;
				
			if (k==i)
				break;
			
			arr[j] = arr[k]; 
			j = k;
		}
		arr[j] = temp;	
	}
	
	PrintArray(arr,n);
	
	return 0;
}
