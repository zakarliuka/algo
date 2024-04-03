// LinkedListNode.h
#ifndef LINKEDLISTNODE_H
#define LINKEDLISTNODE_H

template<typename T>
class LinkedListNode {
public:
    T data;
    LinkedListNode<T>* next;
    LinkedListNode(const T& data) : data(data), next(nullptr) {}
};

#endif // LINKEDLISTNODE_H
