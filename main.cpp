#include <iostream>
#include "templatelist.hpp"
using namespace std;

template <typename T>
List<T>::List(){
    head=new T[10];
    size=0;
}

template <typename T>
List<T>::~List(){
    delete head;
    size=0;
}

template <typename T>
void List<T>::addHead(T newdata){
    head[size]=newdata;
    size++;
}

template <typename T>
bool List<T>::empty() const {
    if(head==NULL)
        return true;
    return false;
}

template <typename T>
void List<T>::delHead(){
    for(int i=0;i<size;i++){
        
    }
    
}
template <typename T>
T List<T>::headElement()const {
    
    return head[0];
    size++;
    
}
template <typename T>
int List<T>::length() const{
    
    
    return size;
}

template <typename T>
void List<T>::print() const{
    for(int i=0;i<size;i++)
    {
        cout<<head[i]<<'\t';
    }
}

int main(int argc, const char * argv[]) {
    // insert code here...
    cout << "Hello, World!\n";
    //template <typename T>
    List<int> list;
    
    list.addHead(0);
    list.addHead(1);
    list.addHead(2);
    list.addHead(3);
    
    list.print();
    List<double> list2;
    list2.addHead(0.0);
    list2.print();
    
    return 0;
}
