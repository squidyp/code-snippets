// Delete array item list

void DeleteItem(ItemType item, int arrayItems[], int arraySize){
	int whatItem;
	int temp;
	std::cout << "Which item is to be deleted: ";
	std::cin >> whatItem;

	for(int i = 0; i < arraySize; i++){

		if(whatItem == arrayItems[i]){
			int temp = arrayItems[i];
			arrayItems[i] = arrayItems[i +1];
			arrayItems[i +1] = temp;
			arraySize--;
		}	
	}
}
