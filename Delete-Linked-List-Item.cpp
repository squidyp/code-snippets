// Delete linked list item

void DeleteItem(ItemType item){
	Node* list = head;
	Node* temp;

  	while (list -> info = info){
		while(list != NULL){
			if(list -> info == info){
				break;
			}else{
				temp = list;
				list = list ->next; 
			}
		}
		if(list == NULL){
		std::cout << item <<" is not found in list"<<std::endl;
		}else{
			if(head == list){
			head = head ->next;
			}else{
			temp ->next = list ->next;
			}
			delete list;
			size--;
		}
  	}	
}
