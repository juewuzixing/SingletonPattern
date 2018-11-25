#include "Singleton.hpp"

Singleton::GC Singleton::GC::gc; // 重要

int main()
{
    Singleton *pSingleton1 = Singleton::GetInstance();
    Singleton *pSingleton2 = Singleton::GetInstance();

    qWarning() << (pSingleton1 == pSingleton2);
    return 0;
}
