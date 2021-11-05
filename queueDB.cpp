//
//  main.cpp
//  queue db
//
//  Created by Charles Panter on 11/27/18.
//  Copyright © 2018 Charles Panter. All rights reserved.
//

#include <iostream>
#include <queue>

int GetLength(std::queue<int>);

int main(){
    std::queue<int>theQ;
    for(int i = 0; i < 5; i++){
        theQ.push(i);
    }
    std::cout << "front is: " << theQ.front()<<std::endl;
    std::cout << "queue lenght is : " << GetLength(theQ) << std::endl;
    std::cout << "front is: " << theQ.front()<<std::endl;
        return 0;
}
int GetLength(std::queue<int>queue){
    int length = 0;
    std::queue<int>temp;
    while(!queue.empty()){
        temp.push(queue.front());
        queue.pop();
        length++;
    }
    queue.push(temp.front()); //rebuild the queue
    return length;
}
