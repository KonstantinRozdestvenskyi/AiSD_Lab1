#include"List.h"
void List::input_List(fstream& f) {
	int info;
	f >> info;
	List_element cur(info, NULL, NULL);
	this->add_head(cur);
	if (!f.eof()) {
		f >> info;
		cur.PutInfo(info);
		this->add_last(cur);
	}
	else
		this->last = this->head;
}