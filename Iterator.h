#pragma once
#include "Link.h"

class Iterator {
public:
    Iterator(Link* link) : link(link) {}
    int& operator*() const;
    void operator++();
    bool operator== (const Iterator& rhs);

private:
    Link* link;
    friend class List;
};
