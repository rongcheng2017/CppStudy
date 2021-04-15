//
// Created by 丰荣成 on 2021/4/15.
//

#include <iostream>
#include "PThread.h"
#include <unistd.h>


void *customPthreadTask(void *pVoid) {
    int *number = static_cast<int *> (pVoid);
    cout << "异步线程执行了： " << *number << endl;
    return 0;//必须返回
}

int main() {
    int number = 9527;
    pthread_t pthreadID;//线程ID

    pthread_create(&pthreadID, 0, customPthreadTask, &number);

//    sleep(10);
//等待pthreadID线程执行完成
    pthread_join(pthreadID, 0);

    return 0;
}