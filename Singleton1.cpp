#include <iostream>

//线程安全的懒汉实现         --- 用于线程比较多的情况
class Singleton
{
public:
	static pthread_mutex_t m_mutex;
	static Singleton* GetInstance();

public:
	void Show();
        
private:
    Singleton();
    ~Singleton();
         
private:
    static Singleton *m_instance;
};

Singleton* Singleton::m_instance = NULL;
pthread_mutex_t Singleton::m_mutex;

Singleton:: Singleton()
{
    pthread_mutex_init(&m_mutex, NULL);
}

Singleton:: ~Singleton()
{
    
}

Singleton* Singleton:: GetInstance()
{
	pthread_mutex_lock(&m_mutex);
	if (NULL == m_instance)
	{
		m_instance = new Singleton();
		pthread_mutex_unlock(&m_mutex);
		return m_instance;
	}
	
	pthread_mutex_unlock(&m_mutex);
    return m_instance;
}

void Singleton::Show()
{
    std::cout << "Singleton::Show() was called." << std::endl;
}

int main()
{
    Singleton::GetInstance()->Show();

	return 0;
}
