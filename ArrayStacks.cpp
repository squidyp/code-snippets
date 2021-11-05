// Array stacks - Stack are last in first out

class Stack{
public:
	bool isEmpty() const; //checks if stack is empty
	boot isFull() const; //checks if stack is full
	void initalStack(); //starts the stack
	Stack(int length); //constructor for the size of the stack
	int top() const; //valve of the top item
	void push(cont int newItem); //push item onto stack
	void pop(); //removes top item from stack
	~Stack(); //cleans memory when done
private:
	int maxStack; //size of array
	int stackTop; //top of stack
	int* list; //pointer for the list

};
Stack::Stack(int l)
{
	maxStack = length;
	initalStack();
	list = new int[maxStack];
}
void Stack::initalStack()
{
	stackTop = 0;
}
boot Stack::isEmty() const
{
	return stackTop == 0;
}
bool Stack::isFull() const
{
	return stackTop == maxStack;
}

int main()
{
	
	return 0;
}
