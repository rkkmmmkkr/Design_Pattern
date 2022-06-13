#pragma once
#include "Product.h"
class CreateProductB :
    public Product
{
public:
    CreateProductB() {};
    ~CreateProductB() {};
    void checkProduct() { std::cout << "CreateB" << endl; }

};

