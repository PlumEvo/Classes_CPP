#include <iostream>
using namespace std;

void PrintArray(int arr[],int n){
	for(int i = 0 ; i < n ; i++)
		cout << arr[i] << " ";
	cout << endl;
}

int main(){
	int arr[] = {4,5,3,2,5};
	int n = sizeof(arr)/sizeof(arr[0]);
	PrintArray(arr,n);
	int q; cin >> q;
	while(q--){
		int sum = 0 , l , r; cin >> l >> r;
		for(int i = l ; i <= r ; i++)
			sum+=arr[i];
		cout << sum << endl;
	}
	return 0;
}
