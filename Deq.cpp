#include "Deq.h"
#include<iostream>

using namespace std;


Deq::~Deq()
{
	while (head)
	{
		tail = head->next;
		delete head;
		head = tail;
	}
}

//Функция ввода списка
void Deq::input (int x)
{
	Node *temp = new Node;
	temp->next = NULL;
	temp->x = x;
	count++;

	if (head != NULL)
	{
		temp->prev = tail;
		tail->next = temp;
		tail = temp;
	}
	else
	{
		temp->prev = NULL;
		head = tail = temp;
	}
}

//Функция вывода списка на экран
void Deq::display()
{
	//Вывод списка с конца
	Node *temp = tail;
	while (temp != NULL)
	{
		cout << temp->x << " ";
		temp = temp->prev;
	}
	cout << "\n";

	//Вывод списка с начала
	temp = head;
	while (temp != NULL)
	{
		cout << temp->x << " ";
		temp = temp->next;
	}
	cout << "\n";
}


//Функция удаления элемента
void Deq::del(int x)
{
	//Удаление первого элемента
	if ((x == 1) && (head->next))
	{
		Node *temp = new Node;
		temp = head;
		head = head->next;
		head->prev = NULL;
		delete temp;
		count--;
		return;
	}
	//Удаление первого элемента, если он один
	else if ((x == 1) && (head == tail))
	{
		head->next = NULL;
		head = NULL;
		delete head;
		count = 0;
		return;
	}
	//Удаление последнего элемента
	if (x == count)
	{
		Node *temp = new Node;
		temp = tail;
		tail = tail->prev;
		tail->next = NULL;
		delete temp;
		count--;
		return;
	}

	//Удаление из середины списка
	Node *temp1 = new Node, *temp2;

	temp1 = temp2 = head;

	for (int i = 0; i < x - 1; i++)
	{
		temp1 = temp1->next;
	}

	temp2 = temp1;
	temp2->prev->next = temp1->next;
	temp2->next->prev = temp1->prev;
	delete temp1;
	count--;
}

void Deq::verify(bool *f)
{
	if (count == 0)
	{
		cout << "Нет элементов в списке!\n";
		*f = false;
		return;
	}
	*f=true;
	return;
}


