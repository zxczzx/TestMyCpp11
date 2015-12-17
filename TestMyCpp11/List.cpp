#include "List.h"

template<class T>
List<T>::List(){
	head = nullptr;
}

template<class T>
void List<T>::push_start(T element){
	std::shared_ptr<Node<T> > n(new Node<T>());
	n->data = element;
	n->next = head;
	head = n;
}

template<class T>
void List<T>::push_end(T element){
	std::shared_ptr<Node<T> > n(head);
	if (n == nullptr){
		push_start(element);
		return;
	}
	while (n->next){ n = n->next; }
	std::shared_ptr<Node<T> > newEl(new Node<T>());
	newEl->data = element;
	n->next = newEl;
	newEl = nullptr;
}

template<class T>
void List<T>::read(){
	std::shared_ptr<Node<T> > n(head);
	while (n){
		std::cout << n->data << std::endl;
		n = n->next;
	}
}

template<class T>
void List<T>::remove(T element){
	std::shared_ptr<Node<T> > n(head);
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