#include <iostream>
#include <cstdlib>


class Node
{
public:
    Node* next;
    int data;
};

using namespace std;

class LinkedList
{
public:
    int length;
    Node* head;

    Node* end;

    LinkedList();
    ~LinkedList();
    void push_front(int data);
    void print();

    /** 20171202 push_front */
    void push_back(int data);
};

LinkedList::LinkedList(){
    this->length = 0;
    this->head = NULL;

    this->end = NULL;

}

LinkedList::~LinkedList(){
    std::cout << "LIST DELETED";
}
/**
 * [LinkedList::push_front description]
 * @param data append front (push_front)          
 * 
 *     ?---2---1
 *     ----->this sort
 *     about a stack ? in first out second
 */
void LinkedList::push_front(int data){
    Node* node = new Node();
    node->data = data;
    node->next = this->head;
    this->head = node;
    this->length++;
}
/**
 * [LinkedList::push_front description]
 * @param data append back (push_back)          
 *             
 *           1---2---?
 *           ----->this sort
 *           this is formate for me 
 *           but Question is each push_back will need find last element / or set a end-point in this class
 *                                    
 */
void LinkedList::push_back(int data){
    Node* node = new Node();
    node->data = data;
    node->next = NULL;

    if(!this->head){
        this->head = node;
        this->end = node;
    }else{
        this->end->next = node;
        this->end = node;
    }

    this->length++;
}

void LinkedList::print(){
    Node* head = this->head;
    int i = 1;
    while(head){
        std::cout << i << ": " << head->data << std::endl;
        head = head->next;
        i++;
    }
}



int main(int argc, char const *argv[])
{
    LinkedList* list = new LinkedList();

    list->push_back(1);
    list->push_back(2);
    list->push_back(2);
    list->push_front(4);
    list->print();

    // for (int i = 0; i < 100; ++i)
    // {
    //     list->push_front(rand() % 100);
    // }
    // list->print();
    // std::cout << "List Length: " << list->length << std::endl;
    // delete list;
    return 0;
}