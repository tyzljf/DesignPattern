#ifndef __SINGLETON_H
#define __SINGLETON_H

class Singleton
{
public:
	static Singleton* GetInstance();
	static void DestoryInstance();

private:
	Singleton()
	{
	}

	Singleton(const Singleton& rhs);
	Singleton& operator=(const Singleton& rhs);

private:
	static Singleton* m_Singleton;
};


#endif