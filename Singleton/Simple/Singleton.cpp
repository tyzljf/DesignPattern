#include "Singleton.h"

Singleton* Singleton::m_Singleton = NULL;

Singleton* Singleton::GetInstance()  //Get the pointer to the singleton object
{
	if(m_Singleton == NULL)
	{
		m_Singleton = new (std::nothrow) Singleton();
		return m_Singleton;
	}

	return m_Singleton;
}

Singleton::DestoryInstance() //Destory the singleton object
{
	if(m_Singleton != NULL)
	{
		delete m_Singleton;
		m_Singleton = NULL;
	}
}