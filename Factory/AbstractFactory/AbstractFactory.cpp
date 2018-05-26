#include "AbstractFactory.h"

AbstractFactory::AbstractFactory()
{
}

AbstractFactory::~AbstractFactory()
{
}

Factory_1::Factory_1()
{
}

Factory_1::~Factory_1()
{
}

AbstractProductA* Factory_1::CreateProductA()
{
	return new ProductA_1();
}

AbstractProductB* Factory_1::CreateProductB()
{
	return new ProductB_1();
}

Factory_2::Factory_2()
{
}

Factory_2::~Factory_2()
{
}

AbstractProductA* Factory_2::CreateProductA()
{
	return new ProductA_2();
}

AbstractProductB* Factory_2::CreateProductB()
{
	return new ProductB_2();
}


