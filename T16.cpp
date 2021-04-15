//
// Created by 丰荣成 on 2021/4/15.
//

#include "T16.h"


class Person {
public:
    ~Person() {
        cout << "Person 析构" << endl;
    }
};

int main() {

    Person *person = new Person();
    //只能指针，自动释放
    shared_ptr<Person> sharedPtr1(person);
    return 0;
}