#include<stdio.h>
#include<iostream>
#include<locale>
#include"Deq.h"
using namespace std;

int main()
{
	setlocale(LC_ALL, "rus");
	int i = 0, x, t;
	bool f;
	Deq d;

	while (true)
	{
		cout << "¬ведите " << i << " элемент списка: \n";
		cout << "¬ведите '0' дл¤ завершени¤ заполнени¤ списка\n";
		cin >> x;
		if (x == 0) break;
		d.input(x);
		i++;
	}
	d.verify(&f);
	if (f=true)
	{
		cout << "DEQUE\n";
		d.display();

		while (true)
		{
			cout << "¬ведите элемент, который хотите удалить\n";
			cout << "¬ведите '0' дл¤ выхода\n";
			cin >> x;
			if (x == 0) break;
			d.del(x);
		}

		cout << "DEQUE\n";
		d.display();
	}

	system("pause");
	return 0;
}