#include <iostream>

const int STACK_SIZE = 10;

class stack{
	private:
		int count;
		int data[STACK_SIZE];
	public:
		stack(void){
			count = 0;
		}
		void push(const int item){
			data[count] = item;
			count++;
		}
		int pop(void){
			count--;
			return(data[count]);
		}
};

int main(void){
	
	stack a_stack;
	
	a_stack.push(14);
	a_stack.push(28);
	a_stack.push(42);
	
	std :: cout << a_stack.pop();
	
	return 0;
}
