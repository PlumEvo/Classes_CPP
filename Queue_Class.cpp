#include <iostream>
using namespace std;

const int SIZE = 10;

class queue{
	private:
		int data[SIZE];
		int rear;
		int front;
	public:
		queue(void){
			front = 0;
			rear = 0;
		}
		void puts(int item){
			data[rear] = item;
			rear++;
		}
		void get(void){
			cout << data[front] << " ";
			front++;
		}
		void display(void){
			for(int i = front ; i < rear ; i++){
				cout << data[i] << " ";
			}
		}
};

int main(void){
		
	queue q1;
	q1.puts(30);
	q1.puts(40);
	q1.puts(50);
	
	q1.display();
	
	cout << "\nFirst Element : " << endl;
	
	q1.get();
	q1.get();
	
	return 0;
}
