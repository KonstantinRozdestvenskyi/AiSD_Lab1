#include"List.h"
void List_element::delete_elem() {
	delete this;
}
void List::delete_List() {
	if (!this->is_empty()) {
		List_element* cur;
		while (!this->is_empty()) {
			cur = this->head->GetNext();
			this->head->delete_elem();
			this->head = cur;
			this->head->PutPrev(NULL);
		}
	}
}