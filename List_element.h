#pragma once
#include<iostream>
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
		this->info = 0;
		this->next = next;
		this->prev = prev;
	}
	int GetInfo() {              //functions that extract private members of a class
		return this->info;
	}
	List_element* GetNext() {
		return this->next;
	}
	List_element* GetNext() {
		return this->next;
	}
	void delete_elem();
	~List_element() {    //destructor
		cout << "сработал деструктор" << '\n';
		this->delete_elem();
	}
};