#include <iostream>
using namespace std;

struct Node {
    int data;
    Node* left;
    Node* right;

    Node(int value) {
        data = value;
        left = right = NULL;
    }
};

class BST {
private:
    Node* root;
    Node* insert(Node* node, int value) {
        if (node == NULL)
            return new Node(value);

        if (value < node->data)
            node->left = insert(node->left, value);
        else if (value > node->data)
            node->right = insert(node->right, value);

        return node;
    }
    bool search(Node* node, int key) {
        if (node == NULL)
            return false;

        if (key == node->data)
            return true;
        else if (key < node->data)
            return search(node->left, key);
        else
            return search(node->right, key);
    }
    void inorder(Node* node) {
        if (node == NULL) return;
        inorder(node->left);
        cout << node->data << " ";
        inorder(node->right);
    }
    void preorder(Node* node) {
        if (node == NULL) return;
        cout << node->data << " ";
        preorder(node->left);
        preorder(node->right);
    }
    void postorder(Node* node) {
        if (node == NULL) return;
        postorder(node->left);
        postorder(node->right);
        cout << node->data << " ";
    }
public:
    BST() {
        root = NULL;
    }
    void insert(int value) {
        root = insert(root, value);
    }
    bool search(int key) {
        return search(root, key);
    }
    void displayInorder() {
        inorder(root);
    }
    void displayPreorder() {
        preorder(root);
    }
    void displayPostorder() {
        postorder(root);
    }
};
int main() {
    BST tree;
    tree.insert(50);
    tree.insert(30);
    tree.insert(70);
    tree.insert(20);
    tree.insert(40);
    tree.insert(60);
    tree.insert(80);

    cout << "Inorder: ";
    tree.displayInorder();

    cout << "\nSearch 40: ";
    cout << (tree.search(40) ? "Found" : "Not Found");

    return 0;
}
