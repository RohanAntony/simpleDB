#include <iostream>
#include <ostream>
#include <cstring>

using namespace std;

struct Person{
  int m_length;
  char *m_name;
public:
  Person();
  Person(char*);
  void setValues(char*);
  void showData();
};

int main(int argc, char const *argv[]) {
  Person person[4];
  person[0].setValues("Rohan");
  person[1].setValues("Antony");
  person[2].setValues("ThisislongerSentence");
  person[3].setValues("Thisisamorelongersentencetopassthe16limit,ithinkso");
  // person[0].showData();
  // person[1].showData();
  // person[2].showData();
  // person[3].showData();
  std::cout << sizeof(person) << std::endl;
  std::cout << sizeof(person[0]) << std::endl;
  return 0;
}

Person::Person(){
  m_name = NULL;
  m_length = 0;
}

Person::Person(char *name){
  m_name = name;
  m_length = strlen(name);
}

void Person::setValues(char *name){
  m_name = name;
  m_length = strlen(name);
}

void Person::showData(){
  std::cout << m_name << std::endl;
}
