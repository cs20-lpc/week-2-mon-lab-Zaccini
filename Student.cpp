#include "Student.hpp"
#include <iostream>

Student::Student() {
    std::cout << "Student object created!" << std::endl;
}


Student::~Student() {
    std::cout << "Student object destroyed!" << std::endl;
}


void Student::setName(string s){
    name = s;
}


void Student::setAge(int i){
    age = i;
}


string Student::getName() const{
    return name;
}


int Student::getAge() const{
    return age;
}
