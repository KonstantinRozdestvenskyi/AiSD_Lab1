//add.cpp
#include"List.h"
void List::add_head(List_element* add_element) {
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
}
void List::add_last(List_element* add_element) {
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
}
void List::add_index(List_element* add_element, int index) {
	if (index > this->List_Length()) {
		cout << "there is no element for such an index" << '\n';
	}
	else {
		if (index == this->List_Length()) {
			this->add_last(add_element);
		}
		else {
			List_element* cur = this->head;
			int i = 0;
			while (i != index) {
				cur = cur->next;
				i++;
			}
			cur->prev->next = add_element;
			add_element->prev = cur->prev;
			cur->prev = add_element;
			add_element->next = cur;
		}
	}
}

	
