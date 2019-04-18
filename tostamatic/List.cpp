// 
// 
// 

#include "List.h"

template<typename T>
List<T>::List()
{
	_size = 0;
	_head = nullptr;
	_tail = nullptr;
}

template<typename T>
List<T>::~List()
{
	Clear();
}

template<typename T>
int List<T>::GetSize() const
{
	return _size;
}

template<typename T>
void List<T>::InsertHead(T value)
{
	Node<T>* node = new Node<T>();
	node->next = _head;
	node->prev = nullptr;
	node->value = value;
	
	if (_head != nullptr)
		_head->prev = node;

	_head = node;
	if (_tail == nullptr)
		_tail = node;

	_size++;
}

template<typename T>
void List<T>::InsertTail(T value)
{
	Node<T>* node = new Node<T>();
	node->next = nullptr;
	node->prev = _tail;
	node->value = value;

	if (_tail != nullptr)
		_tail->next = node;

	_tail = node;
	if (_head == nullptr)
		_head = node;

	_size++;
}

template<typename T>
T List<T>::GetHead()
{
	return _head->value;
}

template<typename T>
T List<T>::GetTail()
{
	return _tail->value;
}

template<typename T>
T List<T>::RemoveHead()
{
	if(_head == nullptr)
		return T();

	Node<T>* head = _head;
	T value = head->value;

	_head = head->next;
	
	if (_head != nullptr)
		_head->prev = nullptr;
	else
		_tail = nullptr;
	
	_size--;

	delete(head);
	return value;
}

template<typename T>

T List<T>::RemoveTail()
{
	if (_tail == nullptr)
		return T();

	Node<T>* tail = _tail;
	T value = tail->value;

	_tail = tail->prev;

	if (_tail != nullptr)
		_tail->next = nullptr;
	else
		_head = nullptr;
	
	_size--;

	delete(tail);
	return value;

}

template<typename T>
void List<T>::Clear()
{
	while (_size > 0)
		RemoveTail();
}

template<typename T>
T* List<T>::ToArray()
{
	T* rst = new T[_size];
	Node<T>* node = _head;
	for (int i = 0; i < _size; i++)
	{
		rst[i] = node->value;
		node = node->next;
	}
	return rst;
}

template<typename T>
void List<T>::FromArray(T* fromArray, int n)
{
	if (_size > 0)
		Clear();

	for (int iCount = 0; iCount < n; iCount++)
	{
		InsertHead(fromArray[iCount]);
	}
}
