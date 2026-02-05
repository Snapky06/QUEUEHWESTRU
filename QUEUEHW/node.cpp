#include "node.h"

Node::Node(T newValue) {
    this->next = nullptr;
    this->value = newValue;
}
