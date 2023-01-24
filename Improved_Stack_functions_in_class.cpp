#include <iostream>
using namespace std;

const int STACK_SIZE = 10;

class stack{
	private :
		int count;
		int data[STACK_SIZE];
	public:
		void init(void){
			count = 0;
		}
		void push(const int item){
			data[count] = item;
			count++;
		}
		int pop(void){
			count--;
			return data[count];
		}		
};

int main() {
	
	stack a_stack;	//declare stack object 
	
	a_stack.init();
	
	a_stack.push(12);
	a_stack.push(24);
	a_stack.push(36);
	
	cout << "\nPop Method used : " << a_stack.pop() <<endl;
	cout << "\nPop Method used : " << a_stack.pop() <<endl;
	
	int in_1;
	cin >> in_1;
	a_stack.push(in_1);
	cout << "Pop Method after insertion : " << a_stack.pop();
	
	return 0;
}

