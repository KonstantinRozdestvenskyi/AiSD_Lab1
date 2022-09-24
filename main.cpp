#include"List.h"
int main() {
	List_element* head = new List_element;
	List_element* cur = head;
	for (int i = 0; i < 4; i++) {
		cur->PutInfo(i);
		if (i != 3) {
			cur->PutNext(new List_element);
			cur->GetNext()->PutPrev(cur);
			cur = cur->GetNext();
		}
		else
			cur->PutNext(NULL);
	}
	List_element a (-1, NULL, NULL);
	head = add_head(head, a);
	List_element* last = SetLast(*head);
	List* List_int = new List(head, last);
	return 0;
}