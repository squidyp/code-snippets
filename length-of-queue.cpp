// length of queue

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
