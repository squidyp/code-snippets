// Merge Sorted linked list

void MergeLists(SortedType list1, SortedType list2, SortedType& result){
	Node* list1SP:
	Node* list2SP:
	Node* tempSP;

	list1SP = list1 ->first;
	list2SP = list2 ->first;

	while(list1 ->next != NULL && list2 ->next != NULL){
		if(list1SP > list2SP){
		list1SP = tempSP;
		list1SP = list1 ->next;
		}else{
		list2SP = tempSP;
		list2SP = list2 ->next;
		}
		result = tempSP:
		result++;
	}
}		
