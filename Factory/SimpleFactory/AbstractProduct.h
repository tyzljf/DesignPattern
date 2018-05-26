#ifndef __ABSTRACT_PRODUCT_H
#define __ABSTRACT_PRODUCT_H

typedef enum
{
	PRODUCT_A,
	PRODUCT_B,	
}PRODUCT_TYPE_E;

class AbstractProduct
{
public:
	AbstractProduct();
	virtual ~AbstractProduct();

public:
	virtual void Show() = 0;
};

class ProductA: public AbstractProduct
{
public:
	ProductA();
	virtual ~ProductA();

public:
	virtual void Show();
};

class ProductB: public AbstractProduct
{
public:
	ProductB();
	virtual ~ProductB();

public:
	virtual void Show();
};

#endif