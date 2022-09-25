//List_elem.h
#pragma once
#include<iostream>
#include<fstream>
using namespace std;
struct List_element {
	int info;
	List_element* next;
	List_element* prev;
	List_element() {
		this->info = 0;
		this->next = NULL;
		this->prev = NULL;
	}
	List_element(int info, List_element* next, List_element* prev) {
		this->info = info;
		this->next = next;
		this->prev = prev;
	}
};


