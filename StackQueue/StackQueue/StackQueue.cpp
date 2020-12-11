#include <iostream>
#include <stack>
#include <queue>
#include <ctime>
#include <string>
#include "Stack.h"
#include "Queue.h"
using namespace std;

int main()
{
	srand(unsigned(time(NULL)));
	//STACK
	/*int count = 10;
	stack<int> st;
	cout << "Is empty: " << st.empty() << endl;
	for (size_t i = 0; i < count; i++)
	{
		int num = rand() % 100;
		cout << "Push " << num << endl;
		st.push(num);
	}
	cout << "Size: " << st.size() << endl;
	cout << "Is empty: " << st.empty() << endl;
	cout << "Top: " << st.top() << endl;
	st.pop();
	cout << "---------While-----------" << endl;
	while (!st.empty())
	{
		cout << "Top: " << st.top() << endl;
		st.pop();
	}*/
	
	/*EXERCISE STACK*/
	//Stack<int> stack(5);
	//cout << "Empty: " <<boolalpha<< stack.empty() << endl;
	//cout<<"Top: "<<stack.peak()<<endl;
	//for (size_t i = 1; i <= 5; i++)
	//{
	//	cout << "Try add " << i*10 << endl;
	//	stack.push(i * 10);
	//}
	//cout << "\nEmpty: " <<boolalpha<< stack.empty() << endl;
	//cout << "----------Remove step by step--------\n" << endl;
	//while (!stack.empty()) {
	//	cout << "Top: " << stack.peak() << endl;
	//	stack.pop();
	//}
	//
	//Stack<string> words(10);
	//words.push("first");
	//words.push("second");
	//words.push("third");
	//cout << words.peak() << endl;
	////size()+
	////clear() delete all stack+
	////print()+
	//words.clear();
	//cout << words.size() << endl;
	//words.push("fourth");
	//cout << words.size() << endl;
	//words.print();

	/*QUEUE*/
	////queue<int> q;
	//int number = 5;
	//for (size_t i = 1; i <= number; i++)
	//{
	//	int value = rand() % 100;
	//	cout << "Add " << value << endl;
	//	q.push(value);
	//}
	//cout << "Size : " << q.size() << endl;
	//cout << "Front : " << q.front() << endl;
	//cout << "Back : " << q.back() << endl;
	//cout << "__________Remove step by step___\n";
	//while (!q.empty())
	//{
	//	cout << "Front : " << q.front() << endl;
	//	q.pop();
	//}
	//cout << "\nSize : " << q.size() << endl;

	/*PRIORITY QUEUE*/
	//priority_queue<int> q;
	//for (size_t i = 1; i <= number; i++)
	//{
	//	int value = rand() % 100;
	//	cout << "Add " << value << endl;
	//	q.push(value);
	//}
	//cout << "Size : " << q.size() << endl;
	//cout << "Top : " << q.top() << endl;
	//cout << "__________Remove step by step___\n";
	//while (!q.empty())
	//{
	//	cout << "Front : " << q.top() << endl;
	//	q.pop();
	//}
	//cout << "\nSize : " << q.size() << endl;
	
	/*EXERCISE QUEUE*/
	Queue<int> q(10);
	q.push(10);
	q.push(22);
	q.push(33);
	q.print();
	q.pop();
	cout <<"First pop"<< endl;
	q.print();
	cout << endl;
	q.pop();
	q.print();
	cout << endl;
	q.print();



	/*Конструктор(черга спочатку пуста)
Вивід елементів черги +
Додавання елемента до черги void add(сonst TData & data) +
Вилучення елемента з черги(вилучається елемент перший). +
Можливі прототипи методу
void extract();
bool extract(T & element);
T extract();
Повернути елемент на початку черги(front)+
Повернути елемент у кінці черги(back)+
Очистка черги +
Обчислення фактичного розміру черги+

Перевірити роботу черги.*/


}
