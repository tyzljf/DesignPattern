#include <iostream>
#include "SimpleFactory.h"
#include "AbstractProduct.h"

int main()
{
	//TODO: 使用智能指针
	AbstractFactory *abstractFact = new SimpleFactory();
	if (NULL == abstractFact)
	{
		std::cout << "new AbstractFactory failed." << std::endl;
		return 1;
	}

	AbstractProduct *abstractProduct = abstractFact->CreateProduct(PRODUCT_B);
	if (NULL == abstractProduct)
	{
		std::cout << "create product B failed." << std::endl;
		delete abstractFact;
		return 1;
	}

	abstractProduct->Show();

	delete abstractProduct;
	delete abstractFact;

	return 0;
}
