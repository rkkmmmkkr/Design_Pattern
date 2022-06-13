#pragma once
#include "Product.h"
class CreateProductA :
    public Product
{
public: 
    CreateProductA() {};
    ~CreateProductA() {};
    void checkProduct() { std::cout << "CreateA" << endl; }
};

