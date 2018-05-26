#include <iostream>
#include "SimpleFactory.h"

SimpleFactory::SimpleFactory()
{
}

SimpleFactory::~SimpleFactory()
{
}

AbstractProduct* SimpleFactory::CreateProduct(PRODUCT_TYPE_E productType)
{
	AbstractProduct * abstractProduct = NULL;
	
	if (PRODUCT_A == productType)
	{
		abstractProduct = new ProductA();
	}
	else if (PRODUCT_B == productType)
	{
		abstractProduct = new ProductB();
	}

	return abstractProduct;
}

