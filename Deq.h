#pragma once
#include "BaseDeq.h"
#include<stdlib.h>


class Deq : public BaseDeq
{
public:
	// Конструктор по умолчанию
	Deq() :BaseDeq() {};
	~Deq();

	void display() override;
	void input(int x) override;
	void del(int x) override;
	void verify(bool *f) override;
};

