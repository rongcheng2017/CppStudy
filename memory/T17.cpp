//
// Created by 丰荣成 on 2021/4/15.
//

#include "T17.h"

template<typename T>

class Ptr {
private:
    T *object;
    int *count;

public:
    Ptr() {
        count = new int(1);
        object = 0;
    }

    Ptr(T *t) : object(t) {
        count = new int(1);
    }

    //析构函数
    ~Ptr() {
        if (--(*count) == 0) {
            if (object) {
                delete object;
            }
            delete count;
            object = 0;
        }
    }

    //拷贝函数
    Ptr(const Ptr &ptr) {
        cout << "拷贝构造函数" << endl;
        ++(*ptr.count);
        object = ptr.object;
        count = ptr.count;
    }

    // = 运算符重载
    Ptr<T> &operator=(const Ptr<T> &ptr) {
        cout << "运算符重载" << endl;

        ++(*ptr.count);
        if (--(*count) == 0) {
            if (object) {
                delete object;
            }
            delete count;
        }
        object = ptr.object;
        count = ptr.count;
        return *this;
    }

    //返回引用计数的 数值
    int use_count() {
        return *this->count;
    }


};

class Person {
public:
    ~Person() {
        cout << "Person 析构" << endl;
    }
};

int main() {
    Person *person = new Person();
    Person *person1 = new Person();
    Ptr<Person> ptr(person);
    Ptr<Person> ptr1(person1);
    Ptr<Person> ptr2=ptr;

    ptr=ptr1;
    cout<< ptr.use_count()<<endl;
    return 0;
}
