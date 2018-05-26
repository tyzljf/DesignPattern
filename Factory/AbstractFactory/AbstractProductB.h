#ifndef __ABSTRACT_PRODUCT_B_H
#define __ABSTRACT_PRODUCT_B_H

class AbstractProductB
{
public:
	AbstractProductB();
	virtual ~AbstractProductB();

public:
	virtual void Show() = 0;
};

class ProductB_1: public AbstractProductB
{
public:
	ProductB_1();
	virtual ~ProductB_1();

public:
	virtual void Show();
};


class ProductB_2: public AbstractProductB
{
public:
	ProductB_2();
	virtual ~ProductB_2();

public:
	virtual void Show();
};
#endif
