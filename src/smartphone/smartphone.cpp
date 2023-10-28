#include <iostream>
using namespace std;
#include "smartphone.hpp"

// Member function implementation
void Smartphone::pretty_print()
{
    cout << "Name: " << Smartphone::name << endl;
    cout << "Storage Space: " << Smartphone::storageSpace << " GB" << endl;
    cout << "Color: " << Smartphone::color << endl;
    cout << "Price: " << Smartphone::price << " $" << endl;
};