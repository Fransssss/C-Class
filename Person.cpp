//
// Created by XaveF on 5/16/2022.
//

#include "Person.h"
#include <sstream>

using std::cout;
using std::endl;
using std::stringstream;
using std::to_string;

Person::Person()
{
    _name = "NoName";
    _age = 0;
}

Person::Person(const string &n, const int &a)
{
    _name = n;
    _age = a;
}

string Person::GetName() const
{
    return _name;
}

int Person::GetAge() const
{
    return _age;
}

string Person::ToString() const
{
    stringstream  ss;
    ss << "Name: " << _name << ", Age: " << to_string(_age);
    return ss.str();
}

string Person::ToJson() const
{
    stringstream sj;
    sj << "[{\"Name\":\"" << _name << "\", \"Age\": " << to_string(_age) << "}]";
    return sj.str();
}
