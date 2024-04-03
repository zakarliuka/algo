// LinkedList.h
#ifndef LINKEDLIST_H
#define LINKEDLIST_H

#include "LinkedListNode.h"

template<typename T>
class LinkedList {
private:
    LinkedListNode<T>* head;
    int size;

public:
    LinkedList() : head(nullptr), size(0) {}
    ~LinkedList();

    void insert(const T& data);
    void remove(const T& data);
    bool search(const T& data) const;
    void display() const;
    int getSize() const { return size; }
};

template<typename T>
LinkedList<T>::~LinkedList() {
    while (head != nullptr) {
        LinkedListNode<T>* temp = head;
        head = head->next;
        delete temp;
    }
}

template<typename T>
void LinkedList<T>::insert(const T& data) {
    LinkedListNode<T>* newNode = new LinkedListNode<T>(data);
    newNode->next = head;
    head = newNode;
    size++;
}

template<typename T>
void LinkedList<T>::remove(const T& data) {
    if (head == nullptr) return;

    if (head->data == data) {
        LinkedListNode<T>* temp = head;
        head = head->next;
        delete temp;
        size--;
        return;
    }

    LinkedListNode<T>* current = head;
    while (current->next != nullptr) {
        if (current->next->data == data) {
            LinkedListNode<T>* temp = current->next;
            current->next = current->next->next;
            delete temp;
            size--;
            return;
        }
        current = current->next;
    }
}

template<typename T>
bool LinkedList<T>::search(const T& data) const {
    LinkedListNode<T>* current = head;
    while (current != nullptr) {
        if (current->data == data)
            return true;
        current = current->next;
    }
    return false;
}

template<typename T>
void LinkedList<T>::display() const {
    LinkedListNode<T>* current = head;
    while (current != nullptr) {
        std::cout << current->data << " ";
        current = current->next;
    }
    std::cout << std::endl;
}

#endif // LINKEDLIST_H
