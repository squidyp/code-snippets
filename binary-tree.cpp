//
//  main.cpp
//  binary-tree
//
//  Created by Charles Panter on 1/3/19.
//  Copyright © 2019 Charles Panter. All rights reserved.
//

#include <iostream>

struct Node {
    int data;
    Node* left;
    Node* right;
};

Node* root; //global variable
Node* MakeNewNode(int data);
Node* Insert(Node* root, int data);
void printNodes(Node* root);

int main() {
    root = NULL;
    int data;
    int x;
    do{
        std::cout << "\nwhat would you like to do? \n 1. enter data \n 2. show data \n 3. exit \n $";
        std::cin >> x;
        switch (x){
            case 1:
                std::cout << "what information? ";
                std::cin >> data;
                Insert(root, data);
                break;
            case 2:
                std::cout << "the data in the heap is: ";
                std::cout << std::endl;
                printNodes(root);
                break;
            case 3:
                std::cout << "see you later! \n";
                return 0;
            default:
                std::cout << "Not a valid input.";
                break;
        }
    }while (x != 3);
    
    return 0;
}
Node* MakeNewNode(int data){
    Node* newNode = new Node();
    newNode->data = data;
    newNode->left = newNode->right = NULL;
    return newNode;
}
Node* Insert(Node* root, int data){
    if(root == NULL){
        root = MakeNewNode(data);
    }else
        if (data <= root->data){
            root->left = Insert(root->left, data);
        }else{
            root->right = Insert(root->right, data);
        }
    return root;
}
void printNodes(Node* root){
    if(root != NULL){
        std::cout << root->data << ' ';
        if(root->left !=NULL){
            std::cout << root->data << ' ';
        printNodes(root->left);
        }
        std::cout << root->data << ' ';
        if(root->right != NULL){
            std::cout << root->data << ' ';
        printNodes(root->right);
        }
        std::cout << root->data << ' ';
    }else {
        std::cout << "Empty Tree :) \n";
    }
}
