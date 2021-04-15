//
// Created by 丰荣成 on 2021/4/15.
//

#include <iostream>
#include "PThread.h"
#include <unistd.h>
#include <queue>


void *customPthreadTask(void *pVoid) {
    int *number = static_cast<int *> (pVoid);
    cout << "异步线程执行了： " << *number << endl;
    return 0;//必须返回
}


queue<int> queueData;
pthread_mutex_t mt;//互斥锁不能有野指针
void *task(void *pVoid) {

    pthread_mutex_lock(&mt);
    int *number = static_cast<int *> (pVoid);
    cout << "异步线程执行了： " << *number << endl;
    if(!queueData.empty()){

    }else{

    }
    pthread_mutex_unlock(&mt);
    return 0;//必须返回
}

int main() {

//    int number = 9527;
//    pthread_t pthreadID;//线程ID
//
//    pthread_create(&pthreadID, 0, customPthreadTask, &number);

//    sleep(10);
//等待pthreadID线程执行完成
//    pthread_join(pthreadID, 0);

    //初始化互斥锁
    pthread_mutex_init(&mt, NULL);
    for (int i = 10001; i < 10006; ++i) {
        queueData.push(i);
    }
    pthread_t pthreadIdArray[10];
    for (int i = 0; i < 10; ++i) {
        pthread_create(&pthreadIdArray[i], 0, task, &i);
    }
    //销毁互斥锁
    pthread_mutex_destroy(&mt);
    return 0;
}