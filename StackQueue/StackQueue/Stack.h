#pragma once
using namespace std;

template<typename T>
class Stack
{
public:
	Stack(int capacity = CAPACITY_DEFAULT);
	void push(const T& elem);
	void pop();
	const T& peak(); // what is top
	bool empty() const;
	bool full() const;
	void clear();
	int size() const;
	void print() const;

private:
	static const int CAPACITY_DEFAULT = 10;
	static const int EMPTY = -1;
	int capacity = 10;
	T* buffer;
	int top;// = -1;

};

template<typename T>
inline Stack<T>::Stack(int capacity)
{
	this->capacity = capacity <= 0 ? CAPACITY_DEFAULT : capacity;
	buffer = new T[this->capacity]{};
	top = EMPTY;
}

template<typename T>
inline void Stack<T>::push(const T& elem)
{
	if (!full())
	{
		++top;
		buffer[top] = elem;
	}
	else
		std::cerr << "Error: Stack if full!!" << std::endl;
}

template<typename T>
inline void Stack<T>::pop()
{
	if (!empty())
	{
		--top;
	}
}

template<typename T>
inline const T& Stack<T>::peak()
{
	static T error;
	if (empty())
		return T(); //default for types  int - 0, bool - false, string - ""
	return buffer[top];
}

template<typename T>
inline bool Stack<T>::empty() const
{
	return top == -1 ? true :false;
}

template<typename T>
inline bool Stack<T>::full() const
{
	return top == capacity - 1 ? true : false;
}

template<typename T>
inline void Stack<T>::clear()
{
	top = EMPTY;
}

template<typename T>
inline int Stack<T>::size() const
{
	return top + 1;
}

template<typename T>
inline void Stack<T>::print() const
{
	for (int i = top; i >= 0; i--)
	{
		cout << buffer[i] << endl;
	}
}

