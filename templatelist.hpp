#ifndef templatelist_hpp
#define templatelist_hpp

#include <stdio.h>

template<class T>
class List{
public:
    List();
    List(const List& list1);
    ~List();
    
    bool empty() const;
    T headElement() const;
    void addHead(T newdata);
    void delHead();
    int length()const;
    void print()const;
    
private:
    T* head;
    int size;
    
};

#endif /* templatelist_hpp */
