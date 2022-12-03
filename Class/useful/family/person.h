#include <iostream>     /* File: person.h */
using namespace std;

class Person
{
  private:
    char* _name;
    int _age;
    Person *_father, *_mother, *_child; 

  public:
    Person(const char* my_name, int my_age, Person* my_father = nullptr,
           Person* my_mother = nullptr, Person* my_child = nullptr);
    ~Person();  // simply deleting the current node, not the whole tree

    Person* father() const;
    Person* mother() const;
    Person* child() const;
    void have_child(Person* baby) ;
    void print_age() const;
    void print_name() const;
    void print_family() const;
};

