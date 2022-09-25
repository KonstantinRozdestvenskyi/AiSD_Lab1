//swap.cpp
#include"List.h"
#include<math.h>
void List::swap(int index1, int index2) {
	int index = max(index1, index2);
	index1 = min(index1, index2);
	index2 = index;
	if (!this->Is_empty()) {
		if (index1 >= this->List_Length() || index2 >= this->List_Length()) {
			cout << "items with such indexes do not exist in the list" << '\n';
		}
		else {
			List_element* cur1 = this->head;
			int i = 0;
			while (i != index1) {
				cur1 = cur1->next;
				i++;
			}
			List_element* cur2 = this->head;
			i = 0;
			while (i != index2) {
				cur2 = cur2->next;
				i++;
			}
			if (cur1->next == cur2) {
				if (cur1->prev != NULL)
					cur1->prev->next = cur2;
				if (cur2->next != NULL)
					cur1->next->prev = cur1;
				cur1->next = cur2->next;
				cur2->prev = cur1->prev;
				cur2->next = cur1;
				cur1->prev = cur2;
			}
			else {
				if (cur1->prev != NULL)
					cur1->prev->next = cur2;
				cur1->next->prev = cur2;
				cur1->next->next = cur1;
				if (cur2->next != NULL)
					cur2->next->prev = cur1;
				List_element* tmp = cur1->next;
				cur1->next = cur2->next;
				cur2->next = tmp;
				tmp = cur1->prev;
				cur1->prev = cur2->prev;
				cur2->prev = tmp;
			}
			if (cur2->prev == NULL)
				this->head = cur2;
			if (cur1->next == NULL) {
				this->last = cur1;
			}
		}
	}
}