#pragma once
#include <iostream>
#include <memory>

template<class T>
class Node{
public:
	int data;
	std::shared_ptr<Node> next;
};

//template<class T>
class List
{
private:
	std::shared_ptr<Node> head;
public:
	List();

	void push_start(int element);
	void push_end(int element);
	void remove(int element);
	void read();
};


