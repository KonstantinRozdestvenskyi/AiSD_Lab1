//Output.cpp
#include"List.h"
void List::Output() {
	if (Is_empty())
		cout << "  list is empty" << '\n';
	else {
		List_element* cur = this->head;
		while (cur != this->last) {
			cout << "  " << cur->info << '\n';
			cur = cur->next;
		}
		cout << "  " << cur->info << '\n';
	}
}