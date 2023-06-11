#include <iostream>
using namespace std;
int main(){
	
	/***|| Removing duplicates in an array in an sorted array ||***/
	int arr[] = {10,20,20,30,30,30,40};
	int len = sizeof(arr)/sizeof(arr[0]);
	int i = 0, j = 1 , count = 0;
	while(j < len){
		if(arr[i]==arr[j]){
			arr[i] = arr[j++];
			count++;
		}
		else{
			i++;	
			arr[i] = arr[j];
			j++;
		}
	}
	for(int i = 0 ; i < len-count ; i++)
		cout << arr[i] << " ";
	cout << endl;
		
	return 0;
}

