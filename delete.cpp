//delete.cpp
#include"List.h"
void List::delete_head() {
	if (!this->Is_empty()) {
		List_element* cur = this->head->next;
		delete this->head;
		head = cur;
		if(head!= NULL)
			head->prev = NULL;
	}
}
void List::delete_last() {
	if (!this->Is_empty()) {
		List_element* cur = this->last->prev;
		delete this->last;
		last = cur;
		last->next = NULL;
		if (last != NULL)
			last->prev = NULL;
	}
}
void List::delete_index(int index) {
	if (!Is_empty()) {
		if (index >= this->List_Length()) {
			cout << "there is no element for such an index" << '\n';
		}
		else {
			if (index == this->List_Length() - 1) {
				this->delete_last();
			}
			else {
				List_element* cur = this->head;
				int i = 0;
				while (i != index) {
					cur = cur->next;
					i++;
				}
				cur->prev->next = cur->next;
				cur->next->prev = cur->prev;
				delete cur;
			}
		}
	}
}
void List::delete_list() {
	if (!Is_empty()) {
		while (head != last) {
			this->delete_head();
		}
		this->delete_head();
		this->last = NULL;
	}
}