#include <iostream>
using namespace std;

/***|| Searching For Element in Array ||***/
int SearchEle(int arr[], int n , int key){
	/*Linear*/
	for(int i = 0 ; i < n ; i++)
		if(arr[i]==key)
			return i;
	return -1;
}	

/***|| Printing Array ||***/
void PrintArray(int arr[],int n){
	cout << "Given Array : " << endl;
	for(int i = 0 ; i < n ; i++)
		cout << arr[i] << " ";
	cout << endl;
}

int main(){
	
	int arr[] = {1,2,3,4,5,6,7,8,9,10};
	int n = sizeof(arr)/sizeof(arr[0]);
	int key = 7;
	PrintArray(arr,n);
	cout << "Element to Search : " << key << "\nIndex : " << SearchEle(arr,n,key) << endl;
	key = 14;
	cout << "Element to Search : " << key << "\nIndex : " << SearchEle(arr,n,key) << endl;
	
	
	return 0;
}
