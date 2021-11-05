//
//  main.cpp
//  heapPost
//
//  Created by Charles Panter on 1/3/19.
//  Copyright © 2019 Charles Panter. All rights reserved.
//

#include <iostream>

int heapSize; //global variable
void onHeap(int, int[]);

int main() {
    int heap [heapSize];
    
    std::cout << "size of the heap? ";
    std::cin >> heapSize;
    std::cout << "enter " << heapSize << " int: ";
    for(int i = 0; i < heapSize; i++){
        std::cin >> heap[i];
    }
    onHeap(heapSize, heap);
    return 0;
}
void onHeap(int, int heap[]){
    for(int i = 0; i < heapSize; i++){
        std::cout << "in the heap: " << heap[i] << std::endl;
    }
}
