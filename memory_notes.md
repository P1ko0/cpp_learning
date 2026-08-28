# Memory Management Notes

## 1. 普通局部对象

```cpp
Device d;
对象在当前作用域内存在
离开作用域后自动销毁
不需要手动 delete
如果不需要动态生命周期，优先使用这种方式

Device* d = new Device();
d 是一个局部指针变量
new Device() 创建的对象不会因为作用域结束自动释放
如果忘记 delete，可能发生内存泄漏

delete d;
delete d 释放的是 d 指向的对象
d 这个指针变量本身仍可能保留原来的地址
此时继续访问可能形成悬空指针问题

unique_ptr<Device> d = make_unique<Device>();
独占管理一个对象
离开作用域后自动释放所管理的对象
不需要手动 delete
不能直接复制
可以通过 std::move() 转移所有权

shared_ptr<Device> d1 = make_shared<Device>();
shared_ptr<Device> d2 = d1;
多个 shared_ptr 可以共同拥有一个对象
内部通过引用计数记录有多少所有者
最后一个所有者消失后，对象才会被释放

优先考虑：

普通局部对象
unique_ptr
真正需要共享所有权时才用 shared_ptr
不要因为智能指针“更高级”就到处使用。