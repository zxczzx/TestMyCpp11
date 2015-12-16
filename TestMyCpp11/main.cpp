#include "List.h"

int main(){
	std::cout << "wyprintuje liste" << std::endl;
	std::shared_ptr<List> list(new List());
	list->push_start(1);
	list->push_start(2);
	list->push_start(3);
	list->push_end(6);
	list->push_end(7);
	list->push_end(8);
	list->push_end(1);
	list->push_start(1);
	list->read();

	std::cout << std::endl;

	list->remove(1);
	list->read();

	return 0;
}