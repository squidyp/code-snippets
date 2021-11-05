// Stack is first in last out or FILO

stuct Node {    //creates a node in a list
	int data;
	Node *next; 
};

class Stack{
public:
	Stack(); //constructor
	~Stack(); //destructor
	void push(int d); //push node onto top of stack
	int pop(); // pop top node off stack
private:
	Node *top; //pointer to top of the stack
}

Stack::Stack(){
	//constructor - starts an empty stack
	top = NULL;
}
Stack::~Stack(){
	//destructor
}
void Stack::push(int d){
	
}
int Stack::pop(){
	
}
