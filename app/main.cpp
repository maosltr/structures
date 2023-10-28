#include <iostream>
#include "smartphone.hpp"

using namespace std;

int main()
{
    Smartphone smartphone1;
    smartphone1.name = "iPhone 12";
    smartphone1.storageSpace = 64;
    smartphone1.color = "Red";
    smartphone1.price = 99;
    smartphone1.pretty_print();

    return 0;
}