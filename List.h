//List.h
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
	bool Is_empty();
	int List_Length();
	void add_head(List_element* add_element);
	void add_last(List_element* add_element);
	void add_index(List_element* add_element, int index);
	void input(fstream& f);
	void delete_head();
	void delete_last();
	void delete_index(int index);
	void delete_list();
	List_element* GetElem(int index);
	void change_index(int index, List_element* change_element);
	void swap(int index1, int index2);
	void Output();
};