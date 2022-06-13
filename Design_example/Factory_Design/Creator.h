#pragma once
#include "Product.h"
class Creator
{
public:
	Creator();
	virtual ~Creator();

	virtual Product* createProductA() = 0;
	virtual Product* createProductB() = 0;
};

