#include <iostream>
#include "AbstractProduct.h"

AbstractProduct::AbstractProduct()
{
}

AbstractProduct::~AbstractProduct()
{
}

Product_A::Product_A()
{
}

Product_A::~Product_A()
{
}

void Product_A::Show()
{
	std::cout << "show product A ..." << std::endl;
}

Product_B::Product_B()
{
}

Product_B::~Product_B()
{
}

void Product_B::Show()
{
	std::cout << "show product B ..." << std::endl;
}
