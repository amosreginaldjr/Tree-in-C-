#include<stdio.h>
#include"Tree.h"

Tree::Tree()
{
    //data = ?;
    left = nullptr;
    right = nullptr;
}

bool Tree::isEmpty(Node* root)
{
    if (root == nullptr)
        return 0;
    return 1;
}

Node* Tree::create_node(int parameter)
{
    Node* new_node = new Node();
    new_node -> data = parameter;
    new_node -> left = nullptr;
    new_node -> right = nullptr;
    return new_node;
}

void Tree::preorder(Node* root_node)
{
    /*What do we want to accomplish:
     1) data
     2) left
     3) right
     DLR
     */
    
    //check that the tree is not null
    if (!isEmpty(root_node))
        return;
    
    //output the DATA
    cout << root_node->data << ' ';
    //move LEFT
    preorder(root_node->left);
    //move RIGHT
    preorder(root_node->right);
}

void Tree::inorder(Node* root_node)
{
    /*What do we want to accomplish:
     1) left
     2) data
     3) right
     */
    
    //check that the tree is not null
    if (!isEmpty(root_node))
        return;
    
    //move LEFT
    inorder(root_node->left);
    // output DATA
    cout << root_node->data << ' ';
    //move RIGHT
    inorder(root_node->right);
}

void Tree::postorder(Node* root_node)
{
    /*what do we want to accomplish:
     1) left
     2) right
     3) data
     */
    
    //check that the tree is not empty
    if (!isEmpty(root_node))
        return;
    
    //move LEFT
    postorder(root_node->left);
    //move RIGHT
    postorder(root_node->right);
    //output DATA
    cout << root_node->data << ' ';
}

void Tree::reverse_preorder(Node* root_node)
{
    /*What do we want to accomplish:
     1) right
     2) left
     3) data
     */
    
    //check that the tree is not null
    if (!isEmpty(root_node))
        return;
    
    //move LEFT
    preorder(root_node->left);
    //move RIGHT
    preorder(root_node->right);
    //output the DATA
    cout << root_node->data << ' ';
}

void Tree::reverse_inorder(Node* root_node)
{
    /*What do we want to accomplish:
     1) right
     2) data
     3) left
     */
    
    //check that the tree is not null
    if (!isEmpty(root_node))
        return;
    
    //move RIGHT
    inorder(root_node->right);
    // output DATA
    cout << root_node->data << ' ';
    //move LEFT
    inorder(root_node->left);
}

void Tree::reverse_postorder(Node* root_node)
{
    /*what do we want to accomplish:
     1) data
     2) right
     3) left
     */
    
    //check that the tree is not empty
    if (!isEmpty(root_node))
        return;
    
    //output DATA
    cout << root_node->data << ' ';
    //move RIGHT
    postorder(root_node->right);
    //move LEFT
    postorder(root_node->left);
}
