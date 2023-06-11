#include <iostream>
using namespace std;

int main() {
	// your code goes here
	int T; cin >> T;
	while(T--){
	    int N; cin >> N;
	    int arr[N] , count = 0;
	    for(int i = 0 ; i < N ; i++)
	        cin >> arr[i];
	    for(int i = 0 ; i < N ; i++){
	        for(int j = i ; j < N ; j++){
	            int sum = 0 , prod = 1;
	            for(int k = i ; k <= j ; k++){
	                sum+=arr[k];
	                prod*=arr[k];
	            }
	            cout << sum << " " << prod << endl;
	            if(sum == prod){
	                count++;}
	        }
	    }
	    cout << count << endl;
	}
	return 0;
}

