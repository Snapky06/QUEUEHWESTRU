#ifndef NODE_H
#define NODE_H

#include <QDate>
template<typename T>

struct Node{

    Node(T newValue){
        this->next = nullptr;
        this->Data = newValue;
        this->Date = QDate::currentDate();
        this->num = "";
    }

    Node<T>* next;
    T Data;
    QDate Date;
    std::string num;
};
#endif // NODE_H
