#include <iostream>
using namespace std;

const int DATA_SIZE = 10;

class parity{
	private:
		int data[DATA_SIZE];
		int count;
	public:
		parity(void){
			count = 0;
		}
		void add(const int item){
			if (item % 2 == 0)
				cout << "TRUE" << endl;
			else
				cout << "FALSE" << endl;
			data[count] = item;
			count++;
		}
		void display(void){
			cout << "\nDisplay all elements in parity : \n";
			for(int i = 0 ; i < count ; i++){
				cout << i << " - " << data[i] << endl;
			}
			cout << "\n----End----\n";
		}
};

int main(void){
	
	parity a_stack;
	
	a_stack.add(10);
	a_stack.add(12);
	a_stack.add(13);
	a_stack.add(15);	
	
	a_stack.display();
	
	return 0;
}
