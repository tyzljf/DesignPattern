#ifndef __ABSTRACT_FACTORY_H
#define __ABSTRACT_FACTORY_H

#include "AbstractProduct.h"

class AbstractFactory
{
public:
	AbstractFactory();
	virtual ~AbstractFactory();
	
public:
	virtual AbstractProduct* CreateProduct() = 0;
};

class Factory_A: public AbstractFactory
{
public:
	Factory_A();
	virtual ~Factory_A();

public:
	virtual AbstractProduct* CreateProduct();
};

class Factory_B: public AbstractFactory
{
public:
	Factory_B();
	virtual ~Factory_B();

public:
	virtual AbstractProduct* CreateProduct();
};


#endif