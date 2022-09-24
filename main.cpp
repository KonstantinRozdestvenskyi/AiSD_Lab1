#include"List.h"
int main() {
	fstream f;
	f.open("in.txt", ios::in);
	List List_int;
	List_int.input_List(f);
}