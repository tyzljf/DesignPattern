/**********************************************************************************
Author:tanyouzhang
Date:2018/1/12
Description: The simplest singleton parttern implementation.
***********************************************************************************/

#include <iostream>
#include "Singleton.h"

//Thread unsafe
int main()
{
	Singleton *sp1 = Singleton::GetInstance();
	Singleton *sp2 = Singleton::GetInstance();

	std::cout << "The result of (sp1 == sp2):" << sp1 == sp2 << std::endl;

	Singleton::DestoryInstance();
	return 0;
}
