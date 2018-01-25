//
// Created by 张泽翔 on 14/12/2017.
//

#include <clocale>
#include <iostream>
#include <stack>

#ifndef LEETCODE_RECROD_TREE_H
#define LEETCODE_RECROD_TREE_H

#endif //LEETCODE_RECROD_TREE_H

using namespace std;

struct node{
    int value;
    node* left;
    node* right;

public:
    node(){};
    node(int value_get){
        value = value_get;
        node* left = NULL;
        node* right = NULL;
    }

};



class Btree{
public:
    Btree();
    Btree(int value);
    ~Btree();

    node* getRoot();

    void insert(int key);
    node* search(int key);
    void destroy_tree();

    void inorder_traRecursive();
    void preorder_traRecursive();
    void postorder_traRecursive();

    void inorder_traRecursive_show(node *root);
    void preorder_traRecursive_show(node *root);
    void postorder_traRecursive_show(node *root);

    void inorder_traWhile();
    void preorder_traWhile();
    void postorder_traWhile();

    /** 6_ContructBinaryTree */
    node* ContructBinaryTree(int preOrderp[], int inOrder[], int length);
    node* ContructBinaryTreeCore(int* startPre, int* endPre , int* startIn, int* endIn );

    /** 23_PrintFromTopToBottom */
    void PrintFromTopToBottom(node *root);
    /** 24_SquenceOfBST */
    bool SquenceOfBST(int sequence[], int length);

private:
    void destroy_tree(node *leaf);
    void insert(int key, node *leaf);
    node *search(int key, node *leaf);

    void inorder_traRecursive(node *left);
    void preorder_traRecursive(node *left);
    void postorder_traRecursive(node *left);

    void inorder_traWhile(node *left);
    void preorder_traWhile(node *left);
    void postorder_traWhile(node *left);

    node *root;
};


Btree::Btree() {
    root =NULL;
}

Btree::Btree(int value) {
    root= new node;
    root->value = value;
    root->left = NULL;
    root->right = NULL;
}

Btree::~Btree() {
    destroy_tree();
}

node* Btree::getRoot() {
    return root;
}

void Btree::destroy_tree(node *leaf){
    if(leaf!=NULL){
        destroy_tree(leaf->left);
        destroy_tree(leaf->right);
        delete leaf;
    }
}

void Btree::destroy_tree() {
    destroy_tree(root);
}

void Btree::insert(int key, node *leaf) {
    if(key < leaf->value){
        if(leaf->left != NULL){
            insert(key,leaf->left);
        }else{
            leaf->left = new node;
            leaf->left->value = key;
            leaf->left->left = NULL;
            leaf->left->right = NULL;
        }
    }else if(key > leaf->value){
        if(leaf->right!=NULL){
            insert(key,leaf->right);
        }else{
            leaf->right = new node;
            leaf->right->value = key;
            leaf->right->left = NULL;
            leaf->right->right = NULL;
        }
    }
}

void Btree::insert(int key){
    if(root!=NULL){
        insert(key,root);
    }else{
        root= new node;
        root->value = key;
        root->left = NULL;
        root->right = NULL;
    }
}

node *Btree::search(int key, node *leaf) {
    if(leaf!=NULL){
        if(key == leaf->value){
            return leaf;
        }
        if(key < leaf->value){
            return search(key,leaf->left);
        }else{
            return search(key,leaf->right);
        }
    }else{
        return NULL;
    }
}

node *Btree::search(int key) {
    return search(key,root);
}


void Btree::inorder_traRecursive(){
    return inorder_traRecursive(root);
}

void Btree::inorder_traRecursive_show(node * show_root){
    return inorder_traRecursive(show_root);

}

void Btree::inorder_traRecursive(node *leaf) {

    if(!leaf) return;

    inorder_traRecursive(leaf->left);
    cout<<leaf->value<<endl;
    inorder_traRecursive(leaf->right);

}



void Btree::preorder_traRecursive(){
    return preorder_traRecursive(root);
}

void Btree::preorder_traRecursive_show(node * show_root){
    return preorder_traRecursive(show_root);

}

void Btree::preorder_traRecursive(node *leaf) {

    if(!leaf) return;
    cout<<leaf->value<<endl;
    preorder_traRecursive(leaf->left);
    preorder_traRecursive(leaf->right);

}


void Btree::postorder_traRecursive() {
    return postorder_traRecursive(root);
}

void Btree::postorder_traRecursive_show(node * show_root){
    return postorder_traRecursive(show_root);

}

void Btree::postorder_traRecursive(node *leaf) {

    if(!leaf) return;
    postorder_traRecursive(leaf->left);
    postorder_traRecursive(leaf->right);
    cout<<leaf->value<<endl;

}



void Btree::preorder_traWhile(){
    return preorder_traWhile(root);
}
void Btree::preorder_traWhile(node *leaf) {

    if(!leaf) return;
    stack<node*> stack;
    stack.push(leaf);

    while(!stack.empty()) {

        node *node = stack.top();

        cout<<node->value<<endl;
        stack.pop();


        if(node->right){
            stack.push(node->right);
        }

        if(node->left){
            stack.push(node->left);
        }
    }
}



void Btree::inorder_traWhile(){
    return inorder_traWhile(root);
}
/**
 * https://articles.leetcode.com/binary-search-tree-in-order-traversal/
 * @param leaf
 */
void Btree::inorder_traWhile(node *leaf) {

    /**
     * v1
     * change modification to original BST data structure (adding a visited flag)
     */
//    if(!leaf) return;
//    stack<node*> stack;
//    stack.push(leaf);
//
//    while(!stack.empty()) {
//
//        node *node = stack.top();
//        if(node != NULL){
//
//            if(!node->visited){
//                stack.push(node->left);
//            }else{
//                cout<<node->value<<endl;
//                stack.pop();
//                stack.push(node->right);
//
//            }
//        }else{
//            stack.pop();
//            if(!stack.empty()){
//                stack.top()->visited = true;
//            }
//        }
//
//    }

    /**
     * v2
     */
//    stack<node*> s;
//    node * current = leaf;
//    bool done = false;
//    while(!done){
//        if(current){
//            s.push(current);
//            current = current->left;
//        }else{
//            if(s.empty()){
//                done = true;
//            }else{
//                current = s.top();
//                s.pop();
//                cout<<current->value<<endl;
//                current = current->right;
//            }
//        }
//    }

    /**
     * v3
     */
    stack<node*> s;
    node* current = leaf;
    while(!s.empty() || current){
        if(current){
            s.push(current);
            current = current->left;

        }else{
            current = s.top();
            s.pop();
            cout<<current->value<<endl;
            current = current->right;
        }
    }

}


void Btree::postorder_traWhile(){
    return postorder_traWhile(root);
}
/**
 * https://articles.leetcode.com/binary-tree-post-order-traversal/
 * @param leaf
 */
void Btree::postorder_traWhile(node *leaf) {


    /**
     * first mode
     */
//    if (!root) return;
//    stack<node*> s;
//    s.push(root);
//    node *prev = NULL;
//    while (!s.empty()) {
//        node *curr = s.top();
//        // we are traversing down the tree
//        if (!prev || prev->left == curr || prev->right == curr) {
//            if (curr->left) {
//                s.push(curr->left);
//            } else if (curr->right) {
//                s.push(curr->right);
//            } else {
//                cout << curr->value << " ";
//                s.pop();
//            }
//        }
//            // we are traversing up the tree from the left
//        else if (curr->left == prev) {
//            if (curr->right) {
//                s.push(curr->right);
//            } else {
//                cout << curr->value << " ";
//                s.pop();
//            }
//        }
//            // we are traversing up the tree from the right
//        else if (curr->right == prev) {
//            cout << curr->value << " ";
//            s.pop();
//        }
//        prev = curr;  // record previously traversed node
//    }
//

    /**
     * second mode
     */

//    if (!root) return;
//    stack<node*> s;
//    s.push(root);
//    node *prev = NULL;
//    while (!s.empty()) {
//        node *curr = s.top();
//        if (!prev || prev->left == curr || prev->right == curr) {
//            if (curr->left)
//                s.push(curr->left);
//            else if (curr->right)
//                s.push(curr->right);
//        } else if (curr->left == prev) {
//            if (curr->right)
//                s.push(curr->right);
//        } else {
//            cout << curr->value << " ";
//            s.pop();
//        }
//        prev = curr;
//    }

    /**
     * third mode
     */

    if (!root) return;
    stack<node*> s;
    stack<node*> output;
    s.push(root);
    while (!s.empty()) {
        node *curr = s.top();
        output.push(curr);
        s.pop();
        if (curr->left)
            s.push(curr->left);
        if (curr->right)
            s.push(curr->right);
    }
    while (!output.empty()) {
        cout << output.top()->value << " ";
        output.pop();
    }
}



//int main(){
    //    Btree* btree = new Btree;

//    btree->insert(5);
//    btree->insert(3);
//    btree->insert(2);
//    btree->insert(4);
//    btree->insert(1);
//    btree->insert(7);
//    btree->insert(6);
//    btree->insert(8);

//    btree->inorder_traRecursive();
//    cout<<endl;
//    btree->preorder_traRecursive();
//    cout<<endl;
//    btree->postorder_traRecursive();

//    btree->preorder_traWhile();
//    btree->inorder_tra®rWhile();
//    btree->postorder_traWhile();

//}














