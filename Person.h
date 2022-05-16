//
// Created by XaveF on 5/16/2022.
//

#ifndef C_CLASS1_PERSON_H
#define C_CLASS1_PERSON_H

#include <iostream>
using std::string;

class Person
{
private:
    string _name;
    int _age;
public:
    Person();         // default constructor
    Person(const string& n, const int& a);
    string GetName() const;
    int GetAge() const;
    string ToString() const;
    string ToJson() const;
};


#endif //C_CLASS1_PERSON_H
