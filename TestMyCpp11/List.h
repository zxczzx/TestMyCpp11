#include <iostream>
#include <memory>

template<class T>
class Node{
public:
	int data;
	std::shared_ptr<Node<T> > next;
};

template<class T>
class List
{
private:
	std::shared_ptr<Node<T> > head;
public:
	List();

	void push_start(T element);
	void push_end(T element);
	void remove(T element);
	void read();
};