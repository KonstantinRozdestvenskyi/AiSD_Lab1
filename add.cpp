#include"List.h"
void List::add_head(List_element elem) {
	if (this->is_empty()) {
		this->head = this->last = &elem;
	}
	else {
		this->head->PutPrev(&elem);
		this->head->GetPrev()->PutNext(this->head);
		this->head = this->head->GetPrev();
		this->head->PutPrev(NULL);
	}
}
void List::add_last(List_element elem) {
	if (this->is_empty()) {
		this->head = this->last = &elem;
	}
	else {
		this->last->PutNext(&elem);
		this->last->GetNext()->PutPrev(this->last);
		this->last = this->last->GetNext();
		this->last->PutNext(NULL);
	}
}
