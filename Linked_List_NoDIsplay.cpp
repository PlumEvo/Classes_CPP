#include <iostream>

class linked_list{ //list
	private:	
		class linked_list_element{ //element of a list
			public:
				int data; //data in element
			private:
				linked_list_element *next_ptr; //points to the next element
			
			friend class linked_list;
		};
	public:
		
		linked_list_element *first_ptr;
		
		//Initialize the linked list 
		linked_list(void){
			(first_ptr = NULL);
		}
		
		//Method for Adding Element 
		void add_list(int item){
			
			//pointer to a element
			linked_list_element *new_ptr;
			
			//allocate space
			new_ptr = new linked_list_element;
			
			//set data to item
			(*new_ptr).data = item;
			
			//next points to first_ptr i.e ,NULL
			(*new_ptr).next_ptr = first_ptr;
			
			//puts first in first place
			first_ptr = new_ptr;
		}
		
		//Method for Displaying Elements from the List
};


int main(void){
	
	linked_list Names;
	
	Names.add_list(6);
	
	
	
	
	return 0;
}
