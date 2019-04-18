// List.h

#ifndef _LIST_h
#define _LIST_h

#if defined(ARDUINO) && ARDUINO >= 100
	#include "arduino.h"
#else
	#include "WProgram.h"
#endif

template<class T>
struct Node
{
	T value;
	Node<T> *next;
	Node<T> *prev;
};

template<typename T>
class List
{
protected:

	int _size;
	Node<T>* _head;
	Node<T>* _tail;

public:

	List();
	~List();

	int GetSize() const;
	T GetHead();
	T GetTail();

	void InsertHead(T);
	void InsertTail(T);

	T RemoveHead();
	T RemoveTail();

	void Clear();
	void FromArray(T* fromArray, int n);
	T* ToArray();

private:

	void insertEmpty(T);

};


#endif

