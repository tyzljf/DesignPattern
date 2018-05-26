#include <iostream>
#include "AbstractFactory.h"
#include "AbstractProduct.h"

int main()
{
	//Produce A product 
	//TODO: ʹ������ָ��
	AbstractFactory *abstractFact = new Factory_A();
	if (NULL == abstractFact)
	{
		std::cout << "new Factory A failed." << std::endl;
		return 1;
	}

	AbstractProduct *abstractProduct = abstractFact->CreateProduct();
	if (NULL == abstractProduct)
	{
		std::cout << "create product A failed." << std::endl;
		return 1;
	}

	abstractProduct->Show();
	
	return 0;
}
