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
    void add(int data);
    void print();

    /** 20171202 add */
    void addx(int data);
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
 * [LinkedList::add description]
 * @param data append front (push_front)          
 * 
 *     ?---2---1
 *     ----->this sort
 *     about a stack ? in first out second
 */
void LinkedList::add(int data){
    Node* node = new Node();
    node->data = data;
    node->next = this->head;
    this->head = node;
    this->length++;
}
/**
 * [LinkedList::add description]
 * @param data append back (push_back)          
 *             
 *           1---2---?
 *           ----->this sort
 *           this is formate for me 
 *           but Question is each addx will need find last element / or set a end-point in this class
 *                                    
 */
void LinkedList::addx(int data){
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

    list->addx(1);
    list->addx(2);
    list->addx(2);
    list->add(4);
    list->print();

    // for (int i = 0; i < 100; ++i)
    // {
    //     list->add(rand() % 100);
    // }
    // list->print();
    // std::cout << "List Length: " << list->length << std::endl;
    // delete list;
    return 0;
}