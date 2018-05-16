#pragma once
#include<stdlib.h>
//Ёлемент списка
struct Node
{
	int x;
	Node *next, *prev;
};


class BaseDeq
{
public:
	BaseDeq() :head(NULL), tail(NULL) {};
	~BaseDeq() {};


	virtual void display()=0;
	virtual void input(int x)=0;
	virtual void del(int x)=0;
	virtual void verify(bool *f)=0;

protected:
	long int count;
    Node *head, *tail;
	
};

