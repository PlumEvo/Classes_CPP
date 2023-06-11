#include <bits/stdc++.h>
using namespace std;

vector<int> AssignPrefixSum(int arr[] , int n){
	vector<int> PrefixSum; int temp = 0;
	for(int i = 0 ; i < n ; i++){
		temp+=arr[i];
		PrefixSum[i] = temp;
	}
	return PrefixSum;
}

void PrintArray(int arr[] , int n){
	for(int i = 0 ; i < n ; i++)
		cout << arr[i] << " ";
	cout << endl;
}
void PrintVector(vector<int>arr,int n){
	for(int i = 0 ; i < n ; i++)
		cout << arr[i] << " ";
	cout << endl;
}

int main(){
	int arr[] = {10,20,10,5,15};
	int n = sizeof(arr)/sizeof(arr[0]);
	
	PrintArray(arr,n);
	cout << endl;
	int PrefixSum[n]; int temp = 0;
	for(int i = 0 ; i < n ; i++){
		temp+=arr[i];
		PrefixSum[i] = temp;
		cout << PrefixSum[i] << " ";
	}
	cout << endl;
	
	
	return 0;
}

