#include <__bit_reference>
//
// Created by 丰荣成 on 2021/4/12.
//
#include "Student.h"

Student::Student() : Student("f") {
//    cout << "student --->" << endl;
}

Student::Student(char *name) : Student(name, 87) {
    this->name = name;
    cout << "一个元素构造函数 name" << this << endl;

}

Student::Student(char *name, int age) {
    this->name = name;
    this->age = age;
//    cout << "两个元素构造函数 name" << name << " age : "<< age<< endl;
}

Student::~Student() {
    cout << "析构函数" << endl;
}

Student::Student(const Student &student) {
    cout << "拷贝构造函数" << endl;
    cout << "student address : " << &student << endl;
    this->age = student.age - 10;
    cout << "this address : " << this << endl;
}

int Student::id = 9;

void Student::setAge(int _age) {
    this->age = _age;
}

void Student::setName(char *_name) {
    this->name = _name;
}

int Student::getAge() {
    return this->age;
}

char *Student::getName() {
    return this->name;
}