#include <iostream>

using namespace std;

struct TreeNode {
    int val;
    TreeNode* left;
    TreeNode* right;
    TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
};

class Solution {
public:
    TreeNode* increasingBST(TreeNode* root) {
        TreeNode* dummy = new TreeNode(0);

        TreeNode* curr = dummy;
        
        inOrderTraversal(root, curr);
        
        TreeNode* newRoot = dummy->right;
        
        delete dummy;
        return newRoot;
    }
    
    void inOrderTraversal(TreeNode* node, TreeNode*& curr) {
        if (node == nullptr) {
            return;
        }
        
        inOrderTraversal(node->left, curr);
    
        curr->right = new TreeNode(node->val);
        curr = curr->right;
        
        inOrderTraversal(node->right, curr); 
    }
};

void printInOrder(TreeNode* root) {
    if (root == nullptr) {
        return;
    }
    printInOrder(root->left);
    cout << root->val << " ";
    printInOrder(root->right);
}

int main() {
    Solution solution;
    
    TreeNode* root = new TreeNode(5);
    root->left = new TreeNode(3);
    root->right = new TreeNode(6);
    root->left->left = new TreeNode(2);
    root->left->right = new TreeNode(4);
    root->right->right = new TreeNode(8);
    root->left->left->left = new TreeNode(1);
    root->right->right->left = new TreeNode(7);
    root->right->right->right = new TreeNode(9);
    
    TreeNode* newRoot = solution.increasingBST(root);
    
    cout << "Modified Tree (Inorder traversal): ";
    printInOrder(newRoot);
    cout << endl;
    
    return 0;
}
