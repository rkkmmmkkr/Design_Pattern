#include "ConcreateCreator.h"
ConcreateCreator::ConcreateCreator() {};
ConcreateCreator::~ConcreateCreator() {};
Product* ConcreateCreator::createProductA() { return new CreateProductA; }
Product* ConcreateCreator::createProductB() { return new CreateProductB; }