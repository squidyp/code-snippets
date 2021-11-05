// type declaration

struct LineType{
	LineType newLine;
	LinePtrType* linePtr;
	LineType* next;
	LineType* back; 
};

class Nodes{
private:
	LineType* head;
	LineType* tail;
	LineType* linePtr;
pulbic:
	LineType (LineType* head){
		LineType  newLine= "- - - Top of File - - -";
		LineType* next;
		LineType* back;
	}
	LineType (LineType* tail){
		LineType newLine= "- - - Bottom of File - - -"
		LineType* next;
		LineType* back;
		}
};
void GoToTop (LineType *linePtr){
	LineType currentLine;
	if(linePtr = head || linePtr = tail) {
	linePtr = head.next -> data;
	currentLine = linePtr;
	}else {
	linePtr = head.next -> data;
	currentLine = linePtr;
	}
}
void GoToBottom (LineType *linePtr){
	LineType currentLine;
	if(linePtr = head || linePtr = tail) {
	linePtr = tail.back -> data;
	currentLine = linePtr;
	}else {
	linePtr = tail.back -> data;
	currentLine = linePtr;
	}
}
void InsertLine(LinePtrType linePtr, LineType newLine){
	LineType* currentLine;
	linePtr ->currentLine.next;
	insert newLine -> linePtr;
	currentLine -> linePtr;
}











