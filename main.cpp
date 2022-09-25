//main.cpp
#include"List.h"
int main() {
	fstream f;
	f.open("in.txt", ios::in);
	List List_int;
	List_element* tmp = new List_element(-10, NULL, NULL);
	List_int.input(f);
	cout << "  List of int:" << '\n';
	List_int.Output();
	cout << '\n';
	cout << "  add_head: " << '\n' << "  element: " << tmp->info << '\n';
	List_int.add_head(tmp);
	List_int.Output();
	tmp = new List_element(10, NULL, NULL);
	cout << '\n';
	cout << "  add_last: " << '\n' << "  element: " << tmp->info << '\n';
	List_int.add_last(tmp);
	List_int.Output();
	cout << '\n';
	cout << "  delete_head: " << '\n';
	List_int.delete_head();
	List_int.Output();
	cout << '\n';
	cout << "  delete_last: "<< '\n';
	List_int.delete_last();
	List_int.Output();
	tmp = new List_element(18, NULL, NULL);
	cout << "  add_index: " << '\n' << "  element: " << tmp->info << '\n' << "  index: 3" << '\n';
	List_int.add_index(tmp, 3);
	List_int.Output();
	cout << '\n';
	cout << "  delete_index: " << '\n' << "  index: 3" << '\n';
	List_int.delete_index(3);
	List_int.Output();
	cout << '\n';
	cout << "  List_length: " << '\n' << "  length of list: " << List_int.List_Length() << '\n';
	cout << '\n';
	cout << "  Is_empty: " << '\n';
	if (List_int.Is_empty())
		cout << "  list is empty" << '\n';
	else
		cout << "  list is  not empty" << '\n';
	cout << '\n';
	cout << "  GetElement: " << '\n' << "  index: 4" << '\n';
	List_int.GetElem(4);
	List_int.Output();
	tmp = new List_element(153, NULL, NULL);
	cout << '\n';
	cout << "  change_index: " << '\n' << "  element: " << tmp->info << '\n' << "  index: 5" << '\n';
	List_int.change_index(5, tmp);
	List_int.Output();
	cout << '\n';
	cout << "  swap: " << '\n' << "  index1: 2 " << "index2: 6" <<  '\n';
	List_int.swap(2, 6);
	List_int.Output();
	cout << '\n';
	cout << "  delete_List: " << '\n';
	List_int.delete_list();
	List_int.Output();
	return 0;
}