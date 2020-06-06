#include<iostream>
#include"Base.h"
#include"Contianer.h"
int main()
{
	
	Container<int> obg;
	obg.add(465);
	obg.add(55);
	obg.add(82);
	obg.add(25);
	obg.add(74);
	obg.add(45);
	obg.add(145);
	obg.add(31);

	std::cout << "length of massive: " << obg.length() << '\n';
	for (int i = 0; i < obg.length(); i++)
		std::cout << obg[i] << '\n';

	Circle d(45);
	std::cout << d;



	system("pause");
	return 0;
}