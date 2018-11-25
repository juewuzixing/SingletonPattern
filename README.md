# SingletonPattern
## 单例模式的要点有三个：

单例类有且仅有一个实例
单例类必须自行创建自己的唯一实例
单例类必须给所有其他对象提供这一实例
## 从具体实现角度来说，可分为以下三点：
提供一个 private 构造函数（防止外部调用而构造类的实例）
提供一个该类的 static private 对象
提供一个 static public 函数，用于创建或获取其本身的静态私有对象（例如：GetInstance()）
## 除此之外，还有一些关键点（需要多加注意，很容易忽视）：
线程安全（双检锁 - DCL，即：double-checked locking）
资源释放
## 参考博客
https://blog.csdn.net/liang19890820/article/details/61615495