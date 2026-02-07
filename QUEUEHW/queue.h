#ifndef QUEUE_H
#define QUEUE_H

#include "node.h"
#include <iostream>

using std::cout;
using std::endl;

template<typename T>
class Queue
{

private:
    int count;
    Node<T>* head;
public:
    Queue(){
        this->head = nullptr;
        this->count = 0;
    }

    ~Queue() {
        clear();
    }

    void enqueue(){
        Node<T>*  newNode = new Node<T>(count);
        count++;
        newNode->num = "A" + std::to_string(count);
        if(this->head == nullptr){
            this->head = newNode;
        }else{
            Node<T>* it = this->head;
            while(it->next != nullptr){
                it = it->next;
            }
            it->next = newNode;
        }
        cout<< "\nCreated The Ticket"
            << "\nPosition In The Queue : " << newNode->num
             <<"\nIn The Day : " << newNode->Date.toString("dd/MM/yyyy").toStdString() <<"\n"<< endl;
        return;
    }

    void dequeue(){
        if(this->head==nullptr){
            cout << "\nQueue Is Empty" << endl;
            return;
        }
        Node<T>* tmp = this->head;
        this->head = tmp->next;
        cout<< "\nPassed The Ticket"
            << "\nPosition In The Queue : " << tmp->num
             <<"\nIn The Day : " << tmp->Date.toString("dd/MM/yyyy").toStdString() <<"\n" << endl;
        delete tmp;
            return;
    }

    void peek(){
        if(this->head == nullptr){
            cout << "\nQueue Is Empty\n" << endl;
            return ;
        }
        cout <<"\nNext In Line Is The Ticket : "<< this->head->num <<"\n"<< endl;
        return;
    }

    bool search(std::string ticket){
        if(this->head==nullptr){
            cout << "Queue Is Empty" << endl;
        }else{
        Node<T>* it = this->head;
        while(it!=nullptr){
            if(it->num == ticket){
                return true;
            }
            it = it->next;
        }
        return false;
        }
        return false;
    }

    void clear(){
        if(this->head == nullptr){
            count = 0;
            cout << "\nCleared The Queue\n" << endl;
            return;
        }
        Node<T>* it = this->head;
        while(it!=nullptr){
            Node<T>* tmp = it;
            it = it->next;
            delete tmp;
        }
        this->head=nullptr;
        count = 0;
        cout << "\nCleared The Queue\n" << endl;
    }

    void print(){
        if(this->head==nullptr){
            cout << "\nQueue Is Empty\n" << endl;
            return;
        }
        Node<T>* it = this->head;
        while(it!=nullptr){
            cout << "\nPosition In The Queue : " << it->num
                 <<"\nIn The Day : " << it->Date.toString("dd/MM/yyyy").toStdString()<< "\n" << endl;
            it = it->next;
        }
        return;
    }
};
#endif // QUEUE_H
