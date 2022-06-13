#pragma once
#include<iostream>
using namespace std;
class Product
{
public:
	Product() {};
	virtual ~Product() {}

	virtual void checkProduct() = 0;
};

