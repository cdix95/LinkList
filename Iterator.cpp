
#include "Iterator.h"

int& Iterator::operator*() const{
    assert(link != nullptr);
    return link->data;
}

void Iterator::operator++(){
    assert(link != nullptr);
    link = link->next;
}

bool Iterator::operator==(const Iterator& rhs){
    return link == rhs.link;
}
