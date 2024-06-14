#include <iostream>
#include <string>
using namespace std;

class Node {
public:
	string info;
	Node* leftchild;
	Node* rightchild;

	Node(string i, Node* l, Node* r) {
		info = i;
		leftchild = l;
		rightchild = r;
	}
};

class BinaryTree
{
public:
	Node* ROOT;

	BinaryTree() {
		ROOT = NULL;  // Initializing ROOT to null
	}

	void insert(string element) {// Insert a Node in a Binary Search Tree
		Node* newNode = new Node(element, NULL, NULL); // Allocate memmory for the new node
		newNode->info = element;  // Assign to the data field of the new node
		newNode->leftchild = NULL;  //Make the left child of the new node point to null
		newNode->rightchild = NULL; // Make the right child of the new node point to null

		Node* parent = NULL;
		Node* currentNode = NULL;

		search(element, parent, currentNode);   // Locate the node which will be the parent of the new node

		if (parent == NULL) //if the parent is NULL (Tree is empty)
		{
			ROOT = newNode; //mark the new node as root
			return;
		}
	}
};


