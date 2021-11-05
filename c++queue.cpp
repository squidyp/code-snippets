#include <iostream>
#include <queue>

int main(){
    std::queue<int> itemQue;
        for(int i = 0; i < 5; i++){
            std::cout << "enqueue" << i << std::endl;
            itemQue.push(i);
        }
        std::cout << "size: " << itemQue.size()<< std::endl;
        
        std::cout << "last item: " << itemQue.back() << std::endl;
        
        std::cout << "front item: " << itemQue.front() << std::endl;
    while(!itemQue.empty()){
        std::cout << "dequeue: " << itemQue.front() << std::endl;
        itemQue.pop();
    }
        
        
        return 0;
}
