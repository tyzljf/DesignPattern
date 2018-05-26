#ifndef __ABSTRACT_Factory_H
#define __ABSTRACT_Factory_H

#include "AbstractProductA.h"
#include "AbstractProductB.h"

class AbstractFactory
{
public:
	AbstractFactory();
	virtual ~AbstractFactory();

public:
	virtual AbstractProductA* CreateProductA() = 0;
	virtual AbstractProductB* CreateProductB() = 0;
};

class Factory_1: public AbstractFactory
{
public:
	Factory_1();
	virtual ~Factory_1();

public:
	virtual AbstractProductA* CreateProductA();
	virtual AbstractProductB* CreateProductB();
};


class Factory_2: public AbstractFactory
{
public:
	Factory_2();
	virtual ~Factory_2();

public:
	virtual AbstractProductA* CreateProductA();
	virtual AbstractProductB* CreateProductB();
};

#endif
