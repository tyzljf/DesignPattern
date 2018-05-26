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

class Product_A: public AbstractProduct
{
public:
	Product_A();
	virtual ~Product_A();

public:
	virtual void Show();
};

class Product_B: public AbstractProduct
{
public:
	Product_B();
	virtual ~Product_B();

public:
	virtual void Show();
};

#endif