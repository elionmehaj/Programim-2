#include <iostream>
#include <vector>

using namespace std;

struct TreeNode {
    int val;
    TreeNode* left;
    TreeNode* right;
    TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
};

class Solution {
public:
    TreeNode* mergeTrees(TreeNode* root1, TreeNode* root2) {
        if (root1 == nullptr) {
            return root2;
        }
        if (root2 == nullptr) {
            return root1;
        }
        
        TreeNode* mergedNode = new TreeNode(root1->val + root2->val);
        mergedNode->left = mergeTrees(root1->left, root2->left);
        mergedNode->right = mergeTrees(root1->right, root2->right);
        
        return mergedNode;
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
    
    TreeNode* root1 = new TreeNode(1);
    root1->left = new TreeNode(3);
    root1->right = new TreeNode(2);
    root1->left->left = new TreeNode(5);
    
    TreeNode* root2 = new TreeNode(2);
    root2->left = new TreeNode(1);
    root2->right = new TreeNode(3);
    root2->left->right = new TreeNode(4);
    root2->right->right = new TreeNode(7);
    
    TreeNode* mergedTree = solution.mergeTrees(root1, root2);
    
    cout << "Merged Tree (Inorder traversal): ";
    printInOrder(mergedTree);
    cout << endl;
    
    return 0;
}
