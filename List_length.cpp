//List_length.cpp
#include"List.h"
int List::List_Length() {
	List_element* cur = this->head;
	int i = 1;
	while (cur != this->last) {
		cur = cur->next;
		i++;
	}
	return i;
}