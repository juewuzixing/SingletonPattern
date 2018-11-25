#include "Singleton.hpp"

Singleton *Singleton::mSingleton = nullptr;

Singleton *Singleton::GetInstance() {
    if (mSingleton == nullptr) {
        mSingleton = new Singleton();
    }
    return mSingleton;
}
