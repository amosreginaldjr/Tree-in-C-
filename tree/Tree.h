#pragma once
#include<iostream>
#include"Node.h"
using namespace std;


class Tree : public Node
{
private:
    //int root_node;
public:
    Tree();                             //completed
    
    bool isEmpty(Node* root);           //completed
    
    Node* create_node(int data);        //completed
    void preorder(Node* root);          //completed

    void inorder(Node* root);           //completed
    void postorder(Node* root);         //completed
    
    
    
    //void output_tree(Node* root);       //not needed?
};
