#include "List.h"

//template<class T>
List::List(){
	head = nullptr;
}

//template<class T>
void List::push_start(int element){
	std::shared_ptr<Node> n(new Node());
	n->data = element;
	n->next = head;
	head = n;
}

//template<class T>
void List::push_end(int element){
	std::shared_ptr<Node> n(head);
	if (n == nullptr){
		push_start(element);
		return;
	}
	while (n->next){ n = n->next; }
	std::shared_ptr<Node> newEl(new Node());
	newEl->data = element;
	n->next = newEl;
	newEl = nullptr;
}

//template<class T>
void List::read(){
	std::shared_ptr<Node> n(head);
	while (n){
		std::cout << n->data << std::endl;
		n = n->next;
	}
}

//template<class T>
void List::remove(int element){
	std::shared_ptr<Node> n(head);
	//delete first element 
	auto current = head;
	auto next = current->next;

	if (n->data == element){
		head = n->next;
		n.reset();
	}
	while (next){
		if (next->data == element){
			current->next = next->next;
			next.reset();
			next = current->next;
		}
		else{
			current = next;
			next = next->next;
		}
	}
}

