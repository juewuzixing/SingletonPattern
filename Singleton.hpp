#ifndef SINGLETON_HPP
#define SINGLETON_HPP

#include <iostream>
#include <QDebug>

class Singleton
{
public:
    static Singleton *GetInstance();

private:
    Singleton() {}

private:
    // 指向单例对象的指针
    static Singleton *mSingleton;

    // GC机制
    class GC
    {
    public:
        ~GC() {
            // 在这里可以销毁所有的资源，比如db链接以及文件句柄等
            if (mSingleton != nullptr) {
                qWarning() << "Destory the mSingleton!";
                delete mSingleton;
                mSingleton = nullptr;
            }
        }
        // 用于释放单例
        static GC gc;
    };
};

#endif // SINGLETON_HPP
