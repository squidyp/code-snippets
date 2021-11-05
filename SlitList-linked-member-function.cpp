// SlitLists linked member function


void SplitLists(UnsortedType list, ItemType item, UnsortedType& list1, UnsortedType& list2){
    //pointers
    Node* list1Location;
    Node* list2Location;

    while (list != NULL){
    	if(item >= key){
			list1 = list;
			list1Location = list -> next;
    	}else{
    	list2 = list;
    	list2location = list ->next;
    	}

    }
   
    
    
    
    std::cout << "list 1: " << list1 << std::endl;
    std::cout << "list 2: " << list2 << std::endl;
}
