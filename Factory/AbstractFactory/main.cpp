#include <iostream>
#include "AbstractFactory.h"
#include "AbstractProductA.h"
#include "AbstractProductB.h"

int main()
{
/*
	AbstractFactory *abstractFact = new Factory_1();
	if (NULL == abstractFact)
	{
		std::cout << "new Factory 1 failed." << std::endl;
		return 1;
	}

	AbstractProductA *abstractProductA = abstractFact->CreateProductA();
	if (NULL == abstractProductA)
	{
		std::cout << "create Product A failed." << std::endl;
		return 1;
	}
	abstractProductA->Show();

	AbstractProductB *abstractProductB = abstractFact->CreateProductB();
	if (NULL == abstractProductB)
	{
		std::cout << "create Product B failed.." << std::endl;
		return 1;
	}
	abstractProductB->Show();
*/
	AbstractFactory *abstractFact = new Factory_2();
	if (NULL == abstractFact)
	{
		std::cout << "new Factory 1 failed." << std::endl;
		return 1;
	}

	AbstractProductA *abstractProductA = abstractFact->CreateProductA();
	if (NULL == abstractProductA)
	{
		std::cout << "create Product A failed." << std::endl;
		return 1;
	}
	abstractProductA->Show();

	AbstractProductB *abstractProductB = abstractFact->CreateProductB();
	if (NULL == abstractProductB)
	{
		std::cout << "create Product B failed.." << std::endl;
		return 1;
	}
	abstractProductB->Show();


	return 0;
}
