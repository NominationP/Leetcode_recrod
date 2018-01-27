#include <iostream>
#include <cstdlib>
#include <stack>

class Node
{
public:
    Node* next;
    int data;

    /** 20180127 26.CopyComplexList*/
    Node* sibling;
};

using namespace std;

class LinkedList
{
public:
    int length;
    int count = 0;
    Node* head;

    Node* end;

    LinkedList();
    ~LinkedList();
    void push_front(int data);
    void print();

    /** 20171202 push_front */
    void push_back(int data);
    /** 20171212 removeNode */
    void removeNode(int data);
    /** 20171212 reversal_print*/
    void printListReversingly_Iteratively();
    void printListReversingly_Recursively(Node* head);
    /** 20180127 26.CopyComplexList */
    Node* CopyComplexList(Node* head);

    /** 20180113 */
    void deleteNodeInList(Node** head, Node* del_node);
    void deleteNodeTest(Node** head, Node* del_node);

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

void LinkedList::removeNode(int data){

    /**
     * one point current
     */
    /**
     * null
     */
    if(!this->head || this->head == NULL){
        return;
    }
    /**
     * delete point
     */
    Node* deletePoint = NULL;
    /**
     * head is data || excetp data
     */
    if(this->head->data == data){
        deletePoint = this->head;
        this->head = this->head->next;
    }else{

        Node* currentPoint = this->head;
        while(currentPoint->next && currentPoint->next->data != data){
            currentPoint = currentPoint->next;
        }

        if(currentPoint->next && currentPoint->next->data == data){
            deletePoint = currentPoint->next;
            currentPoint->next = currentPoint->next->next;
        }

    }
    /**
     * delete actor
     */
    if(deletePoint != NULL){
        delete deletePoint;
        deletePoint = NULL;
    }

    return;


    /**
     * two point pre and current
     */

//    /**
//     * null
//     */
//    if(!this->head || this->head == NULL){
//        return;
//    }
//
//    Node* point = this->head;
//
//    /**
//     * head is data
//     */
//    if(this->head->data == data){
//        this->head = this->head->next;
//        delete point;
//        return;
//    }
//
//    /**
//     * find data except head
//     */
//    Node* prePoint = this->head;
//    point = point->next;
//    while(point){
//
//        if(point->data == data){
//            prePoint->next = point->next;
//            delete point;
//
//            return;
//        }
//        prePoint = point;
//        point = point->next;
//    }
//
//    cout<<"no found"<<endl;
//    return;
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

/**
 * print list reversingly with stack
 *
 * how like||diff between stack and recurse ???
 */
void LinkedList::printListReversingly_Iteratively() {

    /**
     * check null
     */
    if(!this->head) return;

    /**
     * new stack
     */
    stack<Node*> stack;

    Node* point = this->head;
    while(point){

        stack.push(point);
        point = point->next;
    }

    while(!stack.empty()){
        point = stack.top();
        cout<<point->data<<endl;


    }



}

/**
 * print list reversingly with recursively
 */
void LinkedList::printListReversingly_Recursively(Node* head) {


    /**
     * if just one "if" will crash why ???
     * https://stackoverflow.com/questions/5873327/exc-bad-access-error
     */
    if(head){

        if(head->next){
            this->printListReversingly_Recursively(head->next);
        }
    }

    cout<<head->data<<endl;


}


void deleteNodeInList(Node** head , Node* del_node){

    if(!head || !del_node){
        return;
    }

    /**
     * 要删除的节点不是尾节点
     */
    if(del_node->next != NULL){

        Node* del_tmp = del_node->next;
        del_node->data = del_node->next->data;
        del_node->next = del_node->next;

        delete del_tmp;
        del_tmp = NULL; // why ?

    }
    /**
     * list size == 1 and del_node is it
     */
    else if(*head == del_node){

        delete del_node;
        del_node = NULL;
        *head = NULL;
    }
    /**
     * list size > 1 and del_node is tail node
     */
    else{

        Node* pNode= *head;
        while(pNode->next != del_node){
            pNode = pNode->next;
        }

        pNode->next = NULL;
        delete del_node;
        del_node = NULL;

    }
}

//int main(int argc, char const *argv[])
//{
//    LinkedList* list = new LinkedList();
//
//    list->push_back(1);
//    list->push_back(2);
//    list->push_back(2);
//    list->push_back(6);
//    list->push_back(7);
//    list->push_front(4);
//    list->removeNode(1);
//    list->removeNode(7);
//    list->print();
//
//    // for (int i = 0; i < 100; ++i)
//    // {
//    //     list->push_front(rand() % 100);
//    // }
//    // list->print();
//    // std::cout << "List Length: " << list->length << std::endl;
//    // delete list;
//    return 0;
//}