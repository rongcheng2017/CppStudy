//
// Created by 丰荣成 on 2021/4/15.
//

#include "WaitNotify.h"


template<typename T>

class SafeQueueClass {
private:
    queue<T> queue;
    pthread_mutex_t mutex;
    pthread_cond_t cond;//条件变量

public:
    SafeQueueClass() {
        pthread_mutex_init(&mutex, 0);
        pthread_cond_init(&cond, 0);
    }

    ~SafeQueueClass() {
        pthread_mutex_destroy(&mutex);
        pthread_cond_destroy(&cond);
    }

    void add(T t) {
        pthread_mutex_lock(&mutex);
        queue.push(t);
        //告诉消费者，我已经生产好了
//        pthread_cond_signal(&cond);
        pthread_cond_broadcast(&cond);//notify all
        cout << "唤醒 .... " << endl;
        pthread_mutex_unlock(&mutex);
    }

    //使用引用返回
    void get(T &t) {
        pthread_mutex_lock(&mutex);
        while (queue.empty()) {
            cout << "get empty ... wait " << endl;
            //类似java wait
            pthread_cond_wait(&cond, &mutex);
        }
        t = queue.front();
        queue.pop();
        pthread_mutex_unlock(&mutex);
    }
};

SafeQueueClass<int> sq;

//模仿消费者
void *getMethod(void *pVoid) {
    while (true) {
        printf("getMethod: \n");
        int value;
        sq.get(value);
        printf("消费者get 得到的数据:%d\n", value);
        if (-1 == value) {
            printf("消费者 get 全部执行完毕");
            break;
        }
    }
    return 0;
}

void *setMethod(void *pVoid) {
    while (true) {
        printf("setMethod:\n");

        int value;
        printf("请输入你要生成的信息：\n");
        cin >> value;
        if (-1 == value) {
            sq.add(value);
            printf("生成者set 全部执行完毕\n");
            break;
        }
        sq.add(value);
    }
}

int main() {

    pthread_t pthreadGet;
    pthread_create(&pthreadGet, 0, getMethod, 0);

    pthread_t pthreadSet;
    pthread_create(&pthreadSet, 0, setMethod, 0);

    pthread_join(pthreadGet, 0);
    pthread_join(pthreadSet, 0);
    return 0;
}