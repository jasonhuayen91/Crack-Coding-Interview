#include "Flyweight.h"
#include <iostream>
#include <string>
using namespace std;

Flyweight::Flyweight(string intrinsicState)
{
    this->_intrinsicState = intrinsicState;
}

Flyweight::~Flyweight()
{
}

void Flyweight::Operation(const string &extrinsicState)
{
}

string Flyweight::GetIntrinsicState()
{
    return this->_intrinsicState;
}

ConcreteFlyweight::ConcreteFlyweight(string intrinsicState) : Flyweight(intrinsicState)
{
    cout << "ConcreteFlyweight Build....." << intrinsicState << endl;
}

ConcreteFlyweight::~ConcreteFlyweight()
{
}

void ConcreteFlyweight::Operation(const string &extrinsicState)
{
    cout << "ConcreteFlyweight:内蕴[" << this->GetIntrinsicState() << "] 外蕴[" << extrinsicState << "]" << endl;
}