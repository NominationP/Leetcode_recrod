#include<iostream>
#include<cstdlib>
using namespace std;

struct tree{
    int info;
    tree *Left,*Right;
};

tree * root;
class Binary_tree{
public:
    Binary_tree();
    void insert1(int);
    void *insert2(tree *, tree *);
    void Delete(int);
    void pretrav(tree *);
    void intrav(tree *);
    void posttrav(tree *);
};

//tree* Binary_tree::insert2(tree *temp, tree *newnode){
//    if(temp == NULL){
//        temp = newnode;
//    }else if(temp->info < newnode->info){
//        insert2(temp->Right,newnode);
//        if(temp->Right == NULL){
//            temp->Right = newnode
//        }
//    }
//}