//
// Created by 丰荣成 on 2021/4/15.
//

#include "Cast.h"
#include <iostream>

using namespace std;

class Person {
public:
    string name = "default";
};

int main() {

    const Person *p1 = new Person();
    //常量指针 的值不能被修改，
//    p1->name = "Der";
    //使用const_cast 强转后可以修改
    Person *person2 = const_cast<Person *>(p1);
    person2->name = "derry";

    return 0;
}