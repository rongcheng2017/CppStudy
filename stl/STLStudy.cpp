//
// Created by 丰荣成 on 2021/4/14.
//

#include "STLStudy.h"


int main() {
//    vector<int> vector1(10);
//    vector<int> vector2(10, 0);
//
//    vector<int> vector4;
//
//    vector4.insert(vector4.begin(), 2);
//    vector4.insert(vector4.begin(), 22);
//    vector4.insert(vector4.begin(), 33);
//    vector4.insert(vector4.begin(), 44);
//
//    cout << "vector4.front() : " << vector4.front() << endl;
//    vector4.front() = 99;
//    cout << "vector4.front() : " << vector4.front() << endl;
//    cout << "vector4.back() : " << vector4.back() << endl;
//
//    //remove
//    vector4.erase(vector4.begin());
//    cout << "vector4.front() : " << vector4.front() << endl;
//    // for each
//    int i = 0;
//    for (; i < vector4.size(); i++) {
//        cout << " item : i  " << vector4[i] << endl;
//    }
//
//    //iterator
//    for (auto iteratorVar = vector4.begin(); iteratorVar != vector4.end(); iteratorVar++) {
//        cout << "iterator : " << *iteratorVar << endl;
//    }


//    stack<int> stackVar;
//
//    stackVar.push(30);
//    stackVar.push(40);
//    stackVar.push(50);
//
//    while (!stackVar.empty()){
//        cout << " stackVar top: " << stackVar.top() << endl;
//        stackVar.pop();
//    }


//    queue<int> queueVar;
//
//    queueVar.push(20);
//    queueVar.push(30);
//    queueVar.push(40);
//
//    cout << " queueVar front: " << queueVar.front() << endl;
//    cout << " queueVar back: " << queueVar.back() << endl;
//
//    while (!queueVar.empty()){
//        int front =queueVar.front();
//        cout << " queue front : " << front <<endl;
//        queueVar.pop();
//    }

//    从大到小
//    priority_queue<int,vector<int>,less<int>> priorityQueue;
//     从小到大
//    priority_queue<int, vector<int>, greater<int>> priorityQueue;
//
//    priorityQueue.push(10);
//    priorityQueue.push(20);
//    priorityQueue.push(30);
//    priorityQueue.push(40);
//    priorityQueue.push(50);
//    priorityQueue.push(60);
//
//    while (!priorityQueue.empty()) {
//        int front = priorityQueue.top();
//        cout << " priorityQueue front : " << front << endl;
//        priorityQueue.pop();
//    }

//    list<int> listVar;
//
//    listVar.push_front(50);
//    listVar.push_back(60);
//    listVar.insert(listVar.begin(), 70);
//    listVar.insert(listVar.end(), 80);
//
//    listVar.erase(listVar.begin());
//
//    for (auto iteratorVar = listVar.begin(); iteratorVar != listVar.end(); iteratorVar++) {
//        cout << *iteratorVar << endl;
//    }

//        set<int,greater<int>> setVar;
//
//        setVar.insert(1);
//        setVar.insert(1);
//        setVar.insert(2);
//        setVar.insert(3);
//        setVar.insert(4);
//
//        for(auto iteratorVar=setVar.begin();iteratorVar !=setVar.end();iteratorVar++){
//            cout<<"iterator is " << *iteratorVar <<endl;
//        }


//    map<int, string> mapVar;
//    mapVar.insert(pair<int, string>(1, "YI"));
//    mapVar.insert(pair<int, string>(2, "ER"));
//    pair<map<int, string>::iterator, bool> result = mapVar.insert(pair<int, string>(2, "SAN"));
//    if (result.second) {
//        cout << "insert success" << endl;
//    } else {
//        cout << "insert failure" << endl;
//    }
//
//    for (auto item = mapVar.begin(); item != mapVar.end(); item++) {
//        cout << item->first << ", " << item->second.c_str() << "\t";
//    }


    multimap<int, string> multimap;

    multimap.insert(make_pair(10, "shi1 "));
    multimap.insert(make_pair(10, "shi2 "));
    multimap.insert(make_pair(10, "shi3 "));
    multimap.insert(make_pair(30, "sanshi1 "));
    multimap.insert(make_pair(30, "sanshi2 "));
    multimap.insert(make_pair(30, "sanshi3 "));

    multimap.insert(make_pair(20, "ershi1 "));
    multimap.insert(make_pair(20, "ershi2 "));
    multimap.insert(make_pair(20, "ershi3 "));

    for(auto item = multimap.begin();item!=multimap.end();item++){
        cout<< item->second<<endl;
    }

    return 0;

}