#include <iostream>
#include <stdlib.h>
using namespace std;

	const int stack_size = 10; //maximum size of a stack
	
	//Define - ing stack 
	struct stack{
		int count;    	//Number of items in stack
		int data[10]; 	//The items themselves
	};
	
	//Init Method
	
	void stack_init(struct stack &the_stack){
		the_stack.count = 0;
	}
	
	//Push Method
	
	void stack_push(struct stack &the_stack , const int item){
		the_stack.data[the_stack.count] = item;
		the_stack.count++;
	}
	
	//Pop Method
	int stack_pop(struct stack &the_stack){
		the_stack.count--;
		return (the_stack.data[the_stack.count]);
	}

int main(void){
	
	struct stack a_stack; //Declaring stack
	
	stack_init(a_stack); //Init stack
	
	stack_push(a_stack , 10);
	stack_push(a_stack , 20);
	stack_push(a_stack , 30);
	
	cout << "Pop -ing the stack : " << stack_pop(a_stack) << endl; //30
	cout << "Pop -ing the stack : " << stack_pop(a_stack) << endl; //20
	cout << "Insert data in stack" << a_stack.count << " : ";
	
	int input_item;
	cin  >> input_item;
	stack_push(a_stack, input_item);
	
	cout << input_item << " is inserted to stack" << endl;
	
	return 0;
}
	
