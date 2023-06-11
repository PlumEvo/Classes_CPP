#include <iostream>
using namespace std;

/***|| Print Array ||***/

void PrintArray(int arr[],int n){
	cout << "Given Array : " << endl;
	for(int i = 0 ; i < n ; i++)
		cout << arr[i] << " ";
	cout << endl;
}

int main(){
	
	/***|| Insertion in an Array ||***/
	
	int arr[9] = {1,2,3,4,5,6,7,8,9}; //Cond'n - There should always be empty space in end 
	//if there isnt enough space give error
	int n = sizeof(arr)/sizeof(arr[0]);
	PrintArray(arr,n);	
	if(arr[n-1]!=0) //last element is filled
		cout << "Not Enough Space" << endl;
	else
	{
		int ind , ele;
		cout << "Enter Index : ";
		cin >> ind;
		cout << "Enter Element : ";
		cin >> ele;
		
		for(int i = n-1 ; i > ind ; i--){
			arr[i] = arr[i-1];
		}
		arr[ind] = ele;
	}
	PrintArray(arr,n);
	return 0;
}
