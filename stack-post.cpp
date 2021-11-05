//Stack structure 

class Stack{
private:
    //variables
    int stackTop;
    int maxStack;
    int* list; //pointer for the list
    
public:
    //constructor
    Stack(int size){
        maxStack = size;
        startStack();
        list = new int[maxStack];
    }
    //functions
    int top() const {
        return list[stackTop -1];
    }
    void push(int newItem){
        list [maxStack] = newItem;
        stackTop++;
    }
    void startStack(){
        stackTop=0;
    }
    void pop(){
        stackTop--;
    }
};


int main(){

    Stack theStack(5);
    theStack.push(10);
    theStack.push(20);
    std::cout << theStack.top() << std::endl;
    
    theStack.pop();
    std::cout << theStack.top() << std::endl;
    return 0;
}

//Qu


