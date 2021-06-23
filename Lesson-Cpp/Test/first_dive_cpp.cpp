#include <iostream>
#include <string>
#include <list>
#include <vector>

class Person {
protected:
  int age;
  std::string name;
public:
  Person(int age_, std::string name_){
    age=age_;
    name=name_;
  };
  virtual void print() const = 0;
  void hello() const{
      std::cout<<"It's a person family\n";
  };
};

class Student : public Person {
public:
  Student(int age, const char *name) : Person(age, name) {};

  void print() const{
    std::cout<<"Hi! I'm "<< name <<" of "<< age <<" years old!\n";
  };
};

class Teacher : public Person {
public:
  Teacher(int age, const char *name) : Person(age, name) {};

  void print() const{
    std::cout<<"Hi! I'm "<< name <<" of "<< age <<" years old!\n";
  };
};

int main(){
  std::vector<Person> people = {Student(18,"John"),
                              Teacher(26,"Mark"),
                              Student(20,"Sally")};
  for (int i=0; i<3; i++){
    people[i]->print();
  };

  for (auto x: people){ // C++ 11
    x->print();
  };

  for (int i=0; i<people.size(); i++){
    delete people[i];
  };

  return 0;
};
