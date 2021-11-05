// compare stacks function.cpp

bool identical(std::stack<int>stack1, std::stack<int>stack2){
    std::stack<int>temp1;
    std::stack<int>temp2;
    bool guts = true;
    while(!stack1.empty() && !stack2.empty()){
        if (stack1.top() == stack2.top()){
            temp1.push(stack1.top());
            stack1.pop();
            temp2.push(stack2.top());
            stack2.pop();
        }else {
            guts = false;
            std::cout << "stacks do not match"<< std::endl;
            break;
        }
    }
    std::cout << "stacks match"<<std::endl;
    //rebuilding original stack
    while(!temp1.empty() && !temp2.empty()){
        stack1.push(temp1.top());
        temp1.pop();
        stack2.push(temp2.top());
        temp2.pop();
    }
    
    return guts;
}
