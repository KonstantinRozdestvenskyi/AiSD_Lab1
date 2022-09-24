#pragma once
#include"List_element.h"
class List {
private:
	List_element* head;
	List_element* last;
public:
	List() {
		this->head = this->last = NULL;
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
	void delete_List();
	~List() {
		cout << "сработал деструктор" << '\n';
		this->delete_List();
	}
	bool is_empty();
	void add_head(List_element elem);
	void add_last(List_element elem);
	void add_index(List_element elem, int index);
	void input_List(fstream& f);
};
