#include <iostream>
#include "AbstractProductA.h"

AbstractProductA::AbstractProductA()
{
}

AbstractProductA::~AbstractProductA()
{
}

ProductA_1::ProductA_1()
{
}

ProductA_1::~ProductA_1()
{
}

void ProductA_1::Show()
{
	std::cout << "show product A1 ..." << std::endl;
}

ProductA_2::ProductA_2()
{
}

ProductA_2::~ProductA_2()
{
}

void ProductA_2::Show()
{
	std::cout << "show product A2 ..." << std::endl;
}


