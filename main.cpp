// Title: Class and its object
// Purpose: Create a class , its object, and access its class methods
// Author: Fransiskus Agapa
// Have fun - Enjoy the process - Practices make improvement

#include <iostream>
#include "Person.h"

using std::cout;
using std::endl;
using std::cin;

int main()
{
    Person student;                          // call default constructor
    Person studentOne("Becca", 18);
    cout << endl;
    cout << "- String Format" << endl;
    cout << student.ToString() << endl;
    cout << studentOne.ToString() << endl;
    cout << endl;
    cout << "- Json Format" << endl;
    cout << student.ToJson() << endl;
    cout << studentOne.ToJson() << endl;

  return 0;
}
