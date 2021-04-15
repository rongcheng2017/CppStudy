//
// Created by 丰荣成 on 2021/4/15.
//

#include "Thread.h"

void runAction(int number) {
    for (int i = 0; i < 10; ++i) {
        cout << "runAction : " << number << endl;
        sleep(1);
    }
}

int main() {

    thread thread1(runAction, 100);
//    sleep(3);
    thread1.join();
    return 0;
}