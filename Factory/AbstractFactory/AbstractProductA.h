#ifndef __ABSTRACT_PRODUCT_A_H
#define __ABSTRACT_PRODUCT_A_H

class AbstractProductA
{
public:
	AbstractProductA();
	virtual ~AbstractProductA();

public:
	virtual void Show() = 0;
};

class ProductA_1: public AbstractProductA
{
public:
	ProductA_1();
	virtual ~ProductA_1();

public:
	virtual void Show();
};


class ProductA_2: public AbstractProductA
{
public:
	ProductA_2();
	virtual ~ProductA_2();

public:
	virtual void Show();
};
#endif
