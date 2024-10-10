3．下面是一个结构声明：

```c++
struct box
    {
        char maker[40];
        float height;
        float width;
        float length;
        float volume;
    };

```
a．编写一个函数，按值传递box结构，并显示每个成员的值。

b．编写一个函数，传递box结构的地址，并将volume成员设置为其他三维长度的乘积。

c．编写一个使用这两个函数的简单程序。