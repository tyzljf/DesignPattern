#include <iostream>
#include "AbstractProductB.h"

AbstractProductB::AbstractProductB()
{
}

AbstractProductB::~AbstractProductB()
{
}

ProductB_1::ProductB_1()
{
}

ProductB_1::~ProductB_1()
{
}

void ProductB_1::Show()
{
	std::cout << "show product B1 ..." << std::endl;
}

ProductB_2::ProductB_2()
{
}

ProductB_2::~ProductB_2()
{
}

void ProductB_2::Show()
{
	std::cout << "show product B2 ..." << std::endl;
}


