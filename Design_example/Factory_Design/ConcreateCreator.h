#pragma once
#include "Creator.h"
#include"CreateProductA.h"
#include "CreateProductB.h"
class ConcreateCreator :
    public Creator
{
public :
    ConcreateCreator() ;
    ~ConcreateCreator() ;
    Product* createProductA();
    Product* createProductB();
};

