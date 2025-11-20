#include <iostream> //inputoutputstream library
#include <string>
int main()
{
    int sum;
    std::cout << "Hello World!\n"; //cout-символьный вывод

    std::cout << "Input first number: ";
    int n1;
    std::cin >> n1;

    std::cout << "Input second number: ";
    int n2;
    std::cin >> n2;

    std::cout << "Input +,-,/,* ";
    char a;
    std::cin >> a;

    if (a == '+')
    {
        sum = n1 + n2;
    }

    if (a == '-')
    {
        sum = n1 - n2;
    }

    if (a == '*')
    {
        sum = n1 * n2;
    }


    if (a == '/')
    {
        sum = n1 / n2;
    }

    std::cout << sum;


    return 0;
}

