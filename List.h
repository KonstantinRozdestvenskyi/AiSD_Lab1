#pragma once
#include"List_Elem.h"
class List {
private:
	List_element* head;
	List_element* last;
public:
	List() {
		this->head = NULL;
		this->last = NULL;
	}
	List(List_element* head, List_element* last) {
		this->head = head;
		this->last = last;
	}
	List_element* GetHead() {
		return this->head;
	}
	List_element* GetLast() {
		return this->last;
	}
	void PutHead(List_element head) {
		this->head = &head;
	}
	void PutLast(List_element last) {
		this->last = &last;
		this->head = this->head;
	}
};
bool Is_empty(List_element* head);
List_element* SetLast(List_element head);
List_element* add_head(List_element* head, List_element add_element);
List_element* add_last(List_element* last, List_element add_element);