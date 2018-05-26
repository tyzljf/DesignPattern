#include <iostream>

//线程安全的懒汉实现         --- 用于线程比较多的情况
class Singleton
{
public:
	static Singleton& Instance();

public:
	void Show();
        
private:
    Singleton();
    ~Singleton();
         
private:
    static Singleton m_instance;
};

Singleton Singleton::m_instance;

Singleton:: Singleton()
{
    
}

Singleton:: ~Singleton()
{
    
}

Singleton& Singleton:: Instance()
{
    return m_instance;
}

void Singleton::Show()
{
    std::cout << "Singleton::Show() was called." << std::endl;
}

int main()
{
    Singleton::Instance().Show();

	return 0;
}