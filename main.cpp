#include"List.h"
int main() {
	List List_int;
	List_element* add_element = new List_element(10, NULL, NULL);
	List_int.add_head(add_element);
	add_element = new List_element(-10, NULL, NULL);
	List_int.add_last(add_element);
	add_element = new List_element(30, NULL, NULL);
	List_int.add_head(add_element);
	return 0;
}