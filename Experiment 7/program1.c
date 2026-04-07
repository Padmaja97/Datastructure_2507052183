#include <stdio.h>
#include <stdlib.h>

struct TreeNode {
	int val;
	struct TreeNode* left;
	struct TreeNode* right;
};
struct TreeNode* createNode(int data){
	struct TreeNode* newNode = (struct TreeNode*)malloc(sizeof(struct TreeNode));
	newNode->val = data;
	newNode->left = NULL;
	newNode->right = NULL;
	return newNode;	
}

struct TreeNode* insertNode(struct TreeNode* root, int data) {
	if(root == NULL){
		return createNode(data);
	}
	if (data < root->val){
		root->left = insertNode(root->left, data);
	} else {
		root->right = insertNode(root->right, data);
	}
	return root;
}

void inorderHelper(struct TreeNode* root) {
	if (root == NULL)
		return;
	inorderHelper(root->left);
	printf("%d ", root->val);
	inorderHelper(root->right);
}
void inorderTraversal(struct TreeNode* root){
}
