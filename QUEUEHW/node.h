#ifndef NODE_H
#define NODE_H

#include <QDate>
template<typename T>

struct Node{

    Node(T newValue){
        this->next = nullptr;
        this->Date = QDate::currentDate();
        this->num = "";
    }

    Node<T>* next;
    QDate Date;
    std::string num;
};
#endif // NODE_H
