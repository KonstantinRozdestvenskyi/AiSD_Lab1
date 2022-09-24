#pragma once
#include<iostream>
#include<fstream>
using namespace std;
class List_element {
private:
	int info;
	List_element* next;
	List_element* prev;
public:
	List_element() {       //constructors
		this->info = 0;
		this->next = this->prev = NULL;
	}
	List_element(int info, List_element* next, List_element* prev) {
		this->info = info;
		this->next = next;
		this->prev = prev;
	}
	int GetInfo() {
		return this->info;
	}
	List_element* GetNext() {
		return this->next;
	}
	List_element* GetPrev() {
		return this->prev;
	}
	void PutInfo(int info) {
		this->info = info;
	}
	void PutNext(List_element* next) {
		this->next = next;
	}
	void PutPrev(List_element* prev) {
		this->prev = prev;
	}
};
bool Is_empty(List_element* head);
List_element* add_head(List_element* head, List_element add_element);
List_element* add_last(List_element* last, List_element add_element);

