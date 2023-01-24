#include <iostream>
using namespace std;

const int DATA_SIZE = 10;

class checkbook{
	private:
		int data[DATA_SIZE];
		int count;
	public:
		checkbook(void){
			count = 0;
		}
		void add(int item){
			data[count] = item;
			count++;
		}
		int total(void){
			int total_sum = 0;
			for(int i = 0 ; i < count ; i++){
				total_sum += data[i];
			}
			return total_sum;
		}
};

int main(void){
	
	checkbook list;
	
	list.add(10);
	list.add(12);
	list.add(14);
	list.add(16);
	list.add(18);
	
	cout << "Total : " << list.total();
		
	return 0;
}
