// Design_example.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include"ConcreateCreator.h"
int main()
{
    ConcreateCreator Test;
    Product *p = Test.createProductA();
    p->checkProduct();
    Product* b = Test.createProductB();
    b->checkProduct();
}
