#include "AbstractFactory.h"

AbstractFactory::AbstractFactory()
{
}

AbstractFactory::~AbstractFactory()
{
}

Factory_A::Factory_A()
{
}


Factory_A::~Factory_A()
{
}

AbstractProduct* Factory_A::CreateProduct()
{
	return new Product_A();
}

Factory_B::Factory_B()
{
}

Factory_B::~Factory_B()
{
}

AbstractProduct* Factory_B::CreateProduct()
{
	return new Product_B();
}

