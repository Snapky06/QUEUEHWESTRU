

#include "queue.h"
#include <QCoreApplication>
using std::cout;
using std::endl;
using std::cin;
int main(int argc, char *argv[])
{
    QCoreApplication a(argc, argv);

    Queue<int> Tickets;
    int val = 0;
    std::string tick = "";
    int option = 0;
    while(option != 7){
        cout << "[1] Get Ticket"
             << "\n[2] Get Next In Queue"
             << "\n[3] See Next In Queue"
             << "\n[4] Print The Tickets"
             << "\n[5] Search For A Ticket"
             << "\n[6] Clean The Queue"
             << "\n[7] Leave"
             << "\nChoose : ";

        cin >> option;
        if(option > 0 && option <= 7){
        switch(option){

        case 1:
            cout << "Add A Value To The Ticket : ";
            cin >> val;
            Tickets.enqueue(val);
            break;

        case 2:
            Tickets.dequeue();
            break;

        case 3:
            Tickets.peek();
            break;

        case 4:
            Tickets.print();
            break;

        case 5:
        cout << "Type The Desired Ticket : "
             << "Ex. A[Number]";
            cin >> tick;
        if(Tickets.search(tick)){
                cout<< "\nFound In The Queue\n"<< endl;
        }else{
            cout << "\nNot Found In The Queue\n" << endl;
        };
            break;

        case 6:
            Tickets.clear();
            break;
        }
        }else{
            cout << "Option Needs To Be Between 1 & 7" << endl;
        }
    }
    return a.exec();
}
