#include <iostream>

//�̰߳�ȫ������ʵ��         --- �����̱߳Ƚ϶�����
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