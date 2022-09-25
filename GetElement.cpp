//GetElemnt.cpp
#include"List.h"
List_element* List::GetElem(int index) {
	if (index >= this->List_Length()) {
		cout << "there is no element for such an index" << '\n';
		return NULL;
	}
	else {
		List_element* cur = this->head;
		int i = 0;
		while (i != index) {
			cur = cur->next;
			i++;
		}
		return cur;
	}
}