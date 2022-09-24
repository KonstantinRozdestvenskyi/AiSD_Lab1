#include"List.h"
List_element* add_head(List_element* head, List_element add_element) {
	if (Is_empty(head)) {
		head = &add_element;
	}
	else {
		head->PutPrev(&add_element);
		head->GetPrev()->PutNext(head);
		head->GetPrev()->PutPrev(NULL);
	}
	return head->GetPrev();
}
	
