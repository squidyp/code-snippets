//
//  main.cpp
//  stack
//
//  Created by Charles Panter on 11/27/18.
//  Copyright © 2018 Charles Panter. All rights reserved.
//

#include <iostream>
#include <stack>

bool identical(std::stack<int>, std::stack<int>);

int main(){

    std::stack<int> theStack, otherStack;
    theStack.push(10);
    theStack.push(9);
    theStack.push(5);
    
    otherStack.push(10);
    otherStack.push(9);
    otherStack.push(5);
    std::cout<< "first stack top"<< theStack.top() << std::endl;
    std::cout<< "second stack top"<< otherStack.top() << std::endl;
    std::cout << "comparing stacks"<< std::endl;
   
    identical(theStack, otherStack);
    
    std::cout<< "first stack top"<< theStack.top() << std::endl;
    std::cout<< "second stack top"<< otherStack.top() << std::endl;
    return 0;
}

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



