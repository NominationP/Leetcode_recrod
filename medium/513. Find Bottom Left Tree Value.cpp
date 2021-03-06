#include <iostream>
#include <math.h>
#include <vector>
using namespace std;

template <class T>
struct Node {
    T value;
    Node *left;
    Node *right;

    Node(T val) {
        this->value = val;
    }

    Node(T val, Node<T> left, Node<T> right) {
        this->value = val;
        this->left = left;
        this->right = right;
    }
};

template <class T>
class BST {

    private:
    Node<T> *root;
    vector<T> result; //515 513


    void addHelper(Node<T> *root, T val) {
        if (root->value > val) {
            if (!root->left) {
                root->left = new Node<T>(val);
            } else {
                addHelper(root->left, val);
            }
        } else {
            if (!root->right) {
                root->right = new Node<T>(val);
            } else {
                addHelper(root->right, val);
            }
        }
    }

    void printHelper(Node<T> *root) {
        if (!root) return;
        printHelper(root->left);
        cout<<root->value<<' ';
        printHelper(root->right);
    }

    int nodesCountHelper(Node<T> *root) {
        if (!root) return 0;
        else return 1 + nodesCountHelper(root->left) + nodesCountHelper(root->right);

        // return root == NULL ? 0 : max(maxDepth(root -> left), maxDepth(root -> right)) + 1;
    }

    int heightHelper(Node<T> *root) {
        if (!root) return 0;
        else return 1 + max(heightHelper(root->left), heightHelper(root->right));
    }

    void printMaxPathHelper(Node<T> *root) {
        if (!root) return;
        cout<<root->value<<' ';
        if (heightHelper(root->left) > heightHelper(root->right)) {
            printMaxPathHelper(root->left);
        } else {
            printMaxPathHelper(root->right);
        }
    }


    bool deleteValueHelper(Node<T>* parent, Node<T>* current, T value) {
        if (!current) return false;
        if (current->value == value) {
            if (current->left == NULL || current->right == NULL) {
                Node<T>* temp = current->left;
                if (current->right) temp = current->right;
                // here , temp have 3 situation : ex_left .ex_right, null

                if (parent) {
                    if (parent->left == current) {
                        parent->left = temp;
                    } else {
                        parent->right = temp;
                    }
                } else {
                    this->root = temp;
                }
            } else {
                Node<T>* validSubs = current->right;
                while (validSubs->left) {
                    validSubs = validSubs->left;
                }
                T temp = current->value;
                current->value = validSubs->value;
                validSubs->value = temp;
                return deleteValueHelper(current, current->right, temp);
            }
            delete current;
            return true;
        }
        return deleteValueHelper(current, current->left, value) ||
               deleteValueHelper(current, current->right, value);
    }
    //404
    int sumOfLeftLeaves(Node<T> *root,bool isLeft){
        if(!root) return 0;
        if(!root->left && !root->right) return isLeft?root->value:0;
        return sumOfLeftLeaves(root->left,true)+sumOfLeftLeaves(root->right,false);
    }

    //515
    void help_dfs_515(Node<T> *root, int deep){

        if(!root) return ;
        if(result.size()<deep+1){
            result.push_back(root->value);
        }else{
            if(result[deep] < root->value){
                result[deep] = root->value;
            }
        }
        help_dfs_515(root->left,deep+1);
        help_dfs_515(root->right,++deep+1);
    }

    //515
    vector<T> largestValuesHelper(Node<T> *root){


        help_dfs_515(root , 0);
        return result;

    }

    //513
    void help_dfs_513(Node<T> *root , int deep){
        if(!root) return ;
        if(result.size()<deep+1){
            result.push_back(root->value);
        }else{
            // isleft ? result[deep]=root->value : 0;
        }

        help_dfs_513(root->left,deep+1);
        help_dfs_513(root->right,deep+1);


    }

    //513
    int findBottomLeftValueHelper(Node<T> *root){
        help_dfs_513(root,0);
        // for(auto i : result){
        //     cout<<i<<endl;
        // }
        return result[result.size()-1];
    }




    public:
    void add(T val) {
        if (root) {
            this->addHelper(root, val);
        } else {
            root = new Node<T>(val);
        }
    }

    void print() {
        printHelper(this->root);
    }

    int nodesCount() {
        return nodesCountHelper(root);
    }

    int height() {
        return heightHelper(this->root);
    }

    void printMaxPath() {
        printMaxPathHelper(this->root);
    }

    bool deleteValue(T value) {
        return this->deleteValueHelper(NULL, this->root, value);
    }
    /**
     * 404
     * @return [description]
     */
    int left(){

        return sumOfLeftLeaves(this->root,true);

    }
    /**
     * 515
     */
    vector<int> largestValues(){
        return largestValuesHelper(this->root);
    }
    /**
     * 513
     */
     int findBottomLeftValue(){
        return findBottomLeftValueHelper(this->root);
     }


};

int main() {


    BST<int> *bst = new BST<int>();
    bst->add(3);
    bst->add(1);
    bst->add(5);
    bst->add(0);
    bst->add(2);
    bst->add(4);
    bst->add(6);
    // bst->print();

    /**
     * 404
     */
    // cout<<bst->left();


    /**
     * 515
     * dfs(deep++) diff dfs(deep+1)
     */
    // vector<int> v;
    // v = bst->largestValues();
    // for(auto i : v){
    //     cout<<i<<endl;
    // }

    /**
     * 513
     */
     int re = bst->findBottomLeftValue();
     cout<<re<<endl;

    // cout<<endl;
    // cout<<"Nodes count: "<<bst->nodesCount();
    // cout<<endl;
    // cout<<"Height: "<<bst->height();
    // cout<<endl;
    // cout<<"Max path: ";
    // bst->printMaxPath();
    // cout<<endl;
    // bst->deleteValue(11);
    // cout<<"11 removed: ";
    // bst->print();
    // cout<<endl;
    // cout<<"1 removed: ";
    // bst->deleteValue(1);
    // bst->print();
    // cout<<endl;
    // cout<<"-1 removed: ";
    // bst->deleteValue(-1);
    // bst->print();
    // cout<<endl;
    // cout<<"6 removed: ";
    // bst->deleteValue(6);
    // bst->print();
    // cout<<endl;
    // cout<<"-10 removed: ";
    // bst->deleteValue(-10);
    // bst->print();
    // cout<<endl;
    // cout<<"100 removed: ";
    // bst->deleteValue(100);
    // bst->print();
    // cout<<endl;
    return 0;
}