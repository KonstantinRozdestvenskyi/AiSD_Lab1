//input.cpp
#include"List.h"
void List::input(fstream& f) {
	int info;
	f >> info;
	List_element* input = new List_element(info, NULL, NULL);
	this->add_head(input);
	if (!f.eof()) {
		while (!f.eof()) {
			f >> info;
			input = new List_element(info, NULL, NULL);
			this->add_last(input);
		}
	}
}