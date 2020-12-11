#pragma once
using namespace std;

template<typename T>
class Queue
{
public:
	Queue(int capacity = CAPACITY_DEFAULT);

	void push(const T& elem);//
	void pop();//
	const T& peakFirst(); // what is first
	const T& peakLast(); // what is last
	void clear();//
	int size() const;//
	void print() const;//

private:
	static const int CAPACITY_DEFAULT = 10;
	static const int EMPTY = -1;
	int capacity = 10;
	T* buffer;
	int	first;
	int	last;// = -1;

	bool full() const;
	bool empty() const;
};

template<typename T>
inline Queue<T>::Queue(int capacity)
{
	this->capacity = capacity <= 0 ? CAPACITY_DEFAULT : capacity;
	buffer = new T[this->capacity]{};
	first = 0;
	last = EMPTY;
}

//need to add capacity check
template<typename T>
inline void Queue<T>::push(const T& elem)
{
	++last;
	buffer[last] = elem;
}

template<typename T>
inline void Queue<T>::pop()
{
	++this->first;
	if (last-first==-1)
	{
		first = 0;
		last = -1;
	}
}

template<typename T>
inline const T& Queue<T>::peakFirst()
{
	if (empty())
		return T(); //default for types  int - 0, bool - false, string - ""
	return buffer[first];
}

template<typename T>
inline const T& Queue<T>::peakLast()
{
	if (empty())
		return T(); 
	return buffer[last];
}

template<typename T>
inline bool Queue<T>::empty() const
{
	return last == -1 ? true : false;
}

template<typename T>
inline bool Queue<T>::full() const
{
	return last == capacity - 1 ? true : false;
}

template<typename T>
inline void Queue<T>::clear()
{
	last = EMPTY;
	first = 0;
}

template<typename T>
inline int Queue<T>::size() const
{
	return last + 1;
}

template<typename T>
inline void Queue<T>::print() const
{
	for (int i = first; i <= last; i++)
	{
		cout << buffer[i] << endl;
	}
}


