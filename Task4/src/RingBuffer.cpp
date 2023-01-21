#include <iostream>
#include "RingBuffer/RingBuffer.h"

    struct Element
    {
        int data = NULL;
        Element* next;
    };
    Element* head;
    Element* tmp;

    List::List(int length)
    {
        head = new Element;
        tmp = head;
        Element* current = head;
        for (int i = 0; i < length - 1; i++)
        {
            current->next = new Element;
            current = current->next;
        }
        current->next = head;
    };

    void List::print(std::ostream& os) {
        Element* current = head;
        do
        {
            if (current->data == NULL)
            {
                os << "empty" << std::endl;
            }
            else
            {
                os << current->data << std::endl;
            }
            current = current->next;
        } while (current != head);
        os << std::endl;
    };

    void List::add(int x)
    {
        tmp->data = x;
        tmp = tmp->next;
    };
