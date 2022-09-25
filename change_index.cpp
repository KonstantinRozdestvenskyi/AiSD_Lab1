//change_index.cpp
#include"List.h"
void List::change_index(int index, List_element* change_element) {
	List_element* cur = this->head;
	int i = 0;
	while (i != index) {
		cur = cur->next;
		i++;
	}
	cur->prev->next = change_element;
	change_element->prev = cur->prev;
	cur->next->prev = change_element;
	change_element->next = cur->next;
}