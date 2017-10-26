#include <iostream>
#include <cassert>
#include "List.h"

using namespace std;

//testing if LinkedList is empty
void test1(){
    List a;
    assert(a.empty() == true);
    assert(a.size() == 0);
    
    Iterator it = a.begin();
    Iterator end = a.end();
    
    assert(it == end);
    assert(it.operator==(end));
    
    a.push_back(3);
    
    assert(a.empty() == false);
    assert(a.size() == 1);
}

//testing the size after push_back and push_front
void test2(){
    List a;
    a.push_back(-4);
    a.push_back(9);
    
    assert(a.empty() == false);
    assert(a.size() == 2);
    
    a.push_back(-7);
    a.push_front(34);
    a.push_back(11);
    a.push_front(19);
    
    assert(a.size() == 6);
}

//testing push_back with it increments and testing multiple assertions
void test3(){
    List a;
    Iterator it = a.begin();
    Iterator end = a.end();
    assert(it == end);
    
    a.push_back(7);
    a.push_back(-14);
    a.push_back(21);
    it = a.begin();
    assert(*it == 7);
    ++it;
    assert(*it == -14);
    ++it;
    assert(*it == 21);
}

//testing pop_back()
void pop_back(){
    List a;
    Iterator it = a.begin();
    Iterator end = a.end();
    assert(it.operator == (end));
    
    a.push_back(6);
    a.push_front(12);
    a.push_back(-36);
    a.push_back(24);
    a.push_back(-12);
    assert(a.size() == 5);
    
    a.pop_back();
    a.pop_front();
    a.pop_back();
    a.pop_back();
    assert(a.size() == 1);
    it = a.begin();
    assert(*it == 6);
}

//test insert iterator
void insert(){
    List a;
    Iterator it = a.begin();
    Iterator end = a.end();
    
    it = a.insert(it, 8);
    assert(*it == 8);
    ++it;
    
    it = a.insert(it, 9);
    assert(*it == 9);
    assert(a.size() == 2);
}

//testing Iterator erase
void erase(){
    List a;
    Iterator it = a.begin();
    Iterator end = a.end();
    
    a.push_back(0);
    it = a.begin();
    it = a.erase(it);
    
    a.push_back(5);
    a.push_back(10);
    a.push_back(15);
    it = a.begin();
    assert(*it == 5);
    ++it;
    it = a.erase(it);
    assert(*it == 15);
    assert(a.size() == 2);
}



int main(int argc, char * args[]) {
    test1();
    test2();
    test3();
    pop_back();
    insert();
    erase();
    
	cout << "All Tests Passed" << endl;
}
