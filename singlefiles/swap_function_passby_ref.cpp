#include <iostream>

// void swap(int a, int b)
void swap(int &a, int &b)
{

    int temp = a;

    a = b;
    b = temp;
    std::cout << "a: " << a << "\tb: " << b << "\n";
}
int main()
{

    int a = 10;
    int b = 30;
    swap(a, b);
    std::cout << "a: " << a << "\tb: " << b << "\n";

    return 0;
}