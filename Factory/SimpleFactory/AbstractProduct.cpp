#include <iostream>
#include "AbstractProduct.h"

AbstractProduct::AbstractProduct()
{
}

AbstractProduct::~AbstractProduct()
{
}

ProductA::ProductA()
{
}

ProductA::~ProductA()
{
}

void ProductA::Show()
{
	std::cout << "show product A ..." << std::endl;
}

ProductB::ProductB()
{
}

ProductB::~ProductB()
{
}

void ProductB::Show()
{
	std::cout << "show product B ..." << std::endl;
}

