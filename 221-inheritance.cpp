// EXERCISE 22.1
//
// File name: 221-inheritance.cpp
//
// Description:
// Write following two classes and test them from main(). Make
// a generic "Person" class and a derived "Student" class.
//
//   PERSON
//   * member variables:
//     char name[]
//   * constructors:
//     Person()
//     Person(name)
//   * methods
//     void setName(char[])
//     char *getName()
//
//   STUDENT
//   * Inherits "Person"
//   * member variables:
//     int id
//   * constructors:
//     Student()
//     Student(id, name)
//   * methods
//     void setId(int)
//     int getId()

#include <stdio.h>
#include <iostream>
#include <string>
#include <cmath>
#include <cstring>

using namespace std;

class Person
{
public:
    Person();
    Person(const char[]);
    const char *getName();
    void setName(const char[]);
private:
    char name[100];
};

Person::Person()
{
    setName("Anonymous");
}

Person::Person(const char name[])
{
    setName(name);
}

const char *Person::getName()
{
    return name;
}

void Person::setName(const char name[])
{
    strcpy(this->name, name);
}

class Student: public Person
{
public:
    Student();
    Student(int, const char[]);
    int getId();
    void setId(int);
private:
    int id;
};

Student::Student()
{
    setId(0);
    setName("Anonymous");
}

Student::Student(int id, const char name[])
{
    setId(id);
    setName(name);
}

int Student::getId()
{
    return id;
}

void Student::setId(int id)
{
    this->id = id;
}

int main()
{
    Person person0;
    Person person1;
    person1.setName("Doc");
    Person person2("Clara");
    Student student1;
    student1.setName("Marty");
    student1.setId(1985);
    Student student2(1955, "Calvin");

    cout << person0.getName() << endl
         << person1.getName() << endl
         << person2.getName() << endl
         << student1.getName() << ", "
         << student1.getId() << endl
         << student2.getName() << ", "
         << student2.getId() << endl;

    return 0;
}

// End of file