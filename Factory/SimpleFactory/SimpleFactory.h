#ifndef __SIMPLE_FACTORY_H
#define __SIMPLE_FACTORY_H

#include "AbstractFactory.h"

class SimpleFactory: public AbstractFactory
{
public:
	SimpleFactory();
	virtual ~SimpleFactory();

public:
	virtual AbstractProduct* CreateProduct(PRODUCT_TYPE_E productType);
};

#endif