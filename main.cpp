#include <iostream>
#include "Student.h"

using namespace std;

int add(int num1, int num2) {
    return num1 + num2;
}

int add(int num1, int num2, int num3) {
    return num1 + num2 + num3;
}

int add(int num1, int num2, int num3, int num4, int num5 = 500) {
    return num1 + num2 + num3 + num4 + num5;
}

void uploadLogToEngine(char *logText, int, int, double) {
    cout << "log: " << logText << endl;
}

namespace frc {
    int age;
}


Student operator+(Student st1, Student st2) {

}

Student getStudent(char *name) {
    Student student(name);
    cout << "getStudent 函数 :" << &student << endl;
    return student;
}

int main() {
    //先执行拷贝构造函数,再执行析构函数
    Student stu = getStudent("截拳道");
    Student stu1 = getStudent("泰拳");
    Student stu2 = stu1 + stu;
    cout << "main 函数： " << &stu << endl;
//    getchar();
    return 0;
}
