//
// Created by 丰荣成 on 2021/4/12.
//

#ifndef CPPSTUDY_STUDENT_H
#define CPPSTUDY_STUDENT_H

#include <iostream>

using namespace std;

class Student {
private:
    char *name{};
    int age{};

public:
    Student();

    Student(char *name);

    Student(char *name, int age);
    //析构函数，对象销毁时调用，不能有参数
    ~Student();
    //拷贝函数，浅拷贝 深拷贝
    Student(const Student &student);
    //静态变量
    static int id;

    void setAge(int age);

    void setName(char *name);

    int  getAge();

    char *getName();
};

#endif //CPPSTUDY_STUDENT_H
