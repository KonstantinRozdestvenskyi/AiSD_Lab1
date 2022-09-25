#include"List.h"
List_element* List::add_head(List_element* add_element) {
	if (this->Is_empty()) {
		this->head = add_element;
		this->last = this->head;
	}
	else {
		this->head->prev = add_element;
		this->head->prev->next = this->head;
		this->head = this->head->prev;
		this->head->prev = NULL;
	}
	return this->head;
}
List_element* List::add_last(List_element* add_element) {
	if (this->Is_empty()) {
		this->head = add_element;
		this->last = this->head;
	}
	else {
		this->last->next = add_element;
		this->last->next->prev = this->last;
		this->last = this->last->next;
		this->last->next = NULL;
	}
	return this->last;
}

	
