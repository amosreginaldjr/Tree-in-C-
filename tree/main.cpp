#include <iostream>
#include"Tree.h"
using namespace std;

int main()
{
    Tree tree;
    //level 1
    Node* root = tree.create_node(5);
    
    //level 2
    root->left = tree.create_node(10);
    root->right = tree.create_node(15);
    
    //level 3
    root->left->left = tree.create_node(12);
    root->left->right = tree.create_node(17);
    root->right->left = tree.create_node(21);
    root->right->right = tree.create_node(24);
    
    //level 4
    root->left->left->left = tree.create_node(9);
    root->left->left->right = tree.create_node(11);
    
    /*
                5
          10         15
       12    17   21    24
      9  11
     
     */
    
    cout << "Preorder: ";
    tree.preorder(root);
    cout << endl;
    
    cout << "Inorder: ";
    tree.inorder(root);
    cout << endl;
    
    cout << "Postorder: ";
    tree.postorder(root);
    cout << endl;
    
    cout << "Reverse Preorder: ";
    tree.reverse_preorder(root);
    cout << endl;
    
    cout << "Reverse Inorder: ";
    tree.reverse_inorder(root);
    cout << endl;
    
    cout << "Reverse Postorder: ";
    tree.reverse_postorder(root);
    cout << endl;
    
    
    return 0;
}
