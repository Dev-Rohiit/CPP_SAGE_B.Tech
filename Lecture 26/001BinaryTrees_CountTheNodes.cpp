/*

Given the pre-order traversal of a binary tree, design a recursive algorithm to 
count the TreeNodes inside the binary tree

Example : Input  :10 20 40 -1 -1 50 70 -1 -1 -1 30 -1 60 -1 -1
          Output : 7
*/

#include<iostream>

using namespace std;

class TreeNode {
public:
	int val;
	TreeNode* left;
	TreeNode* right;

	TreeNode(int val) {
		this->val = val;
		this->left = this->right = NULL;
	}
};


TreeNode* buildTree() {

	int val;
	cin >> val;

	// base case

	if(val == -1) {
		// construct an empty tree and return pointer to its root TreeNode
		return NULL;
	}

	// recursive case

	// 1. construct the root val using the first value of the given preOrder traversal

	TreeNode* root = new TreeNode(val);

	// 2. ask your friend to construct the leftSubtree from the preOrder traversal of the leftSubtree

	root->left = buildTree();

	// 3. ask your friend to construct the rightSubtree from the preOrder traversal of the rightSubtree

	root->right = buildTree();
	
	return root;

}
int CountNodes(TreeNode* root){
	//base case
	if (!root)
	{
		return 0;
	}
	

	//recursive case
	//1.Count the number of nodes on the left Sub Treee
	int x=  CountNodes(root->left); 
	//2. Count the num of nodes on the right sub Tree...
	int y  = CountNodes(root->right);
	//3. total sum of all the nodes
	return x+y+1;
}

int main() {

	TreeNode* root = buildTree();

	cout << CountNodes(root) << endl;

	return 0;
}