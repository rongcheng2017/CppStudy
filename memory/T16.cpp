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
    Person *person1 = new Person();
    //只能指针，自动释放
//    shared_ptr<Person> sharedPtr1(person);
    //sharedPtr1在栈区创建，+1。 弹栈会 析构函数会 -1。

    unique_ptr<Person> uniquePtr1(person);
    //不允许下面写法
//    unique_ptr<Person> uniquePtr2=uniquePtr1;

    return 0;
}