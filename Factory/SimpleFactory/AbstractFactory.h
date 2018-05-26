#ifndef __ABSTRACT_FACTORY_H
#define __ABSTRACT_FACTORY_H

#include "AbstractProduct.h"

class AbstractFactory
{
public:
	AbstractFactory();
	virtual ~AbstractFactory();
	
public:
	virtual AbstractProduct* CreateProduct(PRODUCT_TYPE_E productType) = 0;
};

#endif