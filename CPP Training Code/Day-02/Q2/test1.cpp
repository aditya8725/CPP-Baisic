#include <iostream>

class Demo
{
public:
    static void add(int a, int b)
    {
        std::cout << "\n int +int = " << a + b;
    }

    static void add(int a, int b, int c)
    {
        std::cout << "\n int +int + int = " << a + b + c;
    }

    static void add(float a, float b)
    {
        std::cout << "\n float + float = " << a + b;
    }

    static void add(double a, double b)
    {
        std::cout << "\n double + double = " << a + b;
    }
};

main()
{
    Demo::add(10, 20);
    Demo::add(10, 20, 30);
    Demo::add(2.4, 5.1);
}