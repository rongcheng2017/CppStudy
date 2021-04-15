//
// Created by 丰荣成 on 2021/4/15.
//

#include "T11.h"






int changeNumber(int *n1, int *n2) {
    int temp = *n1;
    *n1 = *n2;
    *n2 = temp;
}

//引用
int changeNumber(int &n1, int &n2) {
    int temp = n1;
    n1 = n2;
    n2 = temp;
}


int main() {

    int number1 = 100;
    int number2 = 200;
    changeNumber(number1, number2);
    cout << " number1 is " << number1 << " number2 is : " << number2 << endl;
    return 0;
}