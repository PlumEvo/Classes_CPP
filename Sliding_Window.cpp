#include <iostream>
using namespace std;

int NaiveSum(int arr[] , int n , int k);
int SlidingWindow(int arr[] , int n , int k);

int main(){
/*
	Given an array of integers of size 'n'.
	Our aim is to calculate the maximum sum of 'k' 
	consecutive elements in the array.
	
		Input  : arr[] = {100, 200, 300, 400}
		k = 2
		Output : 700
		
		Input  : arr[] = {1, 4, 2, 10, 23, 3, 1, 0, 20}
		k = 4 
		Output : 39
		We get maximum sum by adding subarray {4, 2, 10, 23}
		of size 4.
		
		Input  : arr[] = {2, 3}
		k = 3
		Output : Invalid
		There is no subarray of size 3 as size of whole
		array is 2.
*/
	
	int arr[] = {1, 4, 2, 10, 23, 3, 1, 0, 20};
	int n = sizeof(arr)/sizeof(arr[0]);
	int k = 4;
	
	int max = NaiveSum(arr,n,k);
	int effmax = SlidingWindow(arr,n,k);
	cout << max << " " << effmax << endl;
	
	return 0;
}


int NaiveSum(int arr[] , int n , int k){
	int rmax = 0;
	for(int i = 0 ; i < n-k ; i++){
		int max_temp = 0;
		for(int j = i ; j < i+k ; j++)
			max_temp+=arr[j];
		rmax = max(max_temp,rmax);
	}
	return rmax;
}

int SlidingWindow(int arr[] , int n , int k){
	
	int win_sum = 0;
	for(int i = 0 ; i < k ; i++)
		win_sum+=arr[i];
	int max_sum = win_sum;
	
	for(int i = k ; i < n ; i++){
		win_sum +=(arr[i] - arr[i-k]);
		max_sum = max(win_sum,max_sum);
	}
	
	return max_sum;
}

