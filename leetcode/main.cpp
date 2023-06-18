#include "functions.h"
#include <iostream>
#include <vector>
#include <stack>
#include <string>
#include <queue>
#include <algorithm>
#include <unordered_map>
using namespace std;

int main(){

// 1. Array partition

    // Solution solution;

    // vector<int> nums = {1, 4, 3, 2, 5, 6};

    // int pairSum = solution.arrayPairSum(nums);

    // cout << "Array Pair Sum: " << pairSum << endl;

    // return 0;

    // time complexity: O(n log n)
    // space complexity: O(1)

// 2. Convert sorted array

    // Solution solution;

    // vector<int> nums = {1, 2, 3, 4, 5, 6, 7};

    // TreeNode* root = solution.sortedArrayToBST(nums);

    // cout << "Inorder Traversal: ";
    // solution.inorderTraversal(root);
    // cout << endl;

    // Time complexity: O(n)
    // Space complexity: O(log n)

// 3. Final prices

    // Solution solution;
    // vector<int> prices = {8, 4, 6, 2, 3};

    // vector<int> result = solution.finalPrices(prices);
    // cout << "Result: ";
    // for (int num : result) {
    //     cout << num << " ";
    // }
    // cout << endl;
    
    // Time complexity: O(n^2)
    // Space complexity: O(n)

// 4. Find the winner

    // Solution solution;

    // int n = 5;
    // int k = 2;

    // int winner = solution.findTheWinner(n, k);

    // cout << "The winner is: " << winner << endl;

    // Time complexity: O(n)
    // Space complexity: O(k)

// 5. Increasing order

    // Solution solution;
    
    // TreeNode* root = new TreeNode(5);
    // root->left = new TreeNode(3);
    // root->right = new TreeNode(6);
    // root->left->left = new TreeNode(2);
    // root->left->right = new TreeNode(4);
    // root->right->right = new TreeNode(8);
    // root->left->left->left = new TreeNode(1);
    // root->right->right->left = new TreeNode(7);
    // root->right->right->right = new TreeNode(9);
    
    // TreeNode* newRoot = solution.increasingBST(root);
    
    // cout << "Modified Tree (Inorder traversal): ";
    // printInOrder(newRoot);
    // cout << endl;

    // Time complexity: O(n)
    // Space complexity: O(n)

// 6. Linked list cycle

    // Solution solution;

    // ListNode* head = new ListNode(3);
    // head->next = new ListNode(2);
    // head->next->next = new ListNode(0);
    // head->next->next->next = new ListNode(-4);
    // head->next->next->next->next = head->next;

    // bool hasCycle = solution.hasCycle(head);

    // cout << "Has Cycle: " << (hasCycle ? "true" : "false") << endl;

    // Time complexity: O(n)
    // Space complexity: O(1)

// 7. Maximum 69 number

    // Solution solution;

    // int num = 9669;
    // int maxNum = solution.maximum69Number(num);

    // cout << "Maximum Number: " << maxNum << endl;

    // Time complexity: O(d)
    // Space complexity: O(d)

// 8. Maximum count 

    // Solution solution;
    // vector<int> nums = {1, -2, 3, -4, 5};

    // int maxCount = solution.maximumCount(nums);
    // cout << "Maximum Count: " << maxCount << endl;

    // Time complexity: O(n)
    // Space complexity: O(1)

// 9. Maximum depth tree

    // Solution solution;
    
    // TreeNode* root = new TreeNode(3);
    // root->left = new TreeNode(9);
    // root->right = new TreeNode(20);
    // root->right->left = new TreeNode(15);
    // root->right->right = new TreeNode(7);
    
    // int maxDepth = solution.maxDepth(root);
    
    // cout << "Maximum Depth: " << maxDepth << endl;
   
    // Time complexity: O(n)
    // Space complexity: O(h)

// 10. Merge 2 binary tress

    // Solution solution;
    
    // TreeNode* root1 = new TreeNode(1);
    // root1->left = new TreeNode(3);
    // root1->right = new TreeNode(2);
    // root1->left->left = new TreeNode(5);
    
    // TreeNode* root2 = new TreeNode(2);
    // root2->left = new TreeNode(1);
    // root2->right = new TreeNode(3);
    // root2->left->right = new TreeNode(4);
    // root2->right->right = new TreeNode(7);
    
    // TreeNode* mergedTree = solution.mergeTrees(root1, root2);
    
    // cout << "Merged Tree (Inorder traversal): ";
    // printInOrder(mergedTree);
    // cout << endl;


    // Time complexity: O(n)
    // Space complexity: O(n)

// 11. Missing number

    // Solution solution;
    // vector<int> nums = {0, 1, 3, 4, 5};

    // int missingNumber = solution.missingNumber(nums);
    // cout << "Missing Number: " << missingNumber << endl;

    // Time complexity: O(n)
    // Space complexity: O(1)

// 12. Negative number matrix

    // Solution solution;
    // vector<vector<int>> grid = {
    //     {4, 3, 2, -1},
    //     {3, 2, 1, -1},
    //     {1, 1, -1, -2},
    //     {-1, -1, -2, -3}
    // };

    // Time complexity: O(m + n)
    // Space complexity: O(1)

// 13. Number of recent class

    // RecentCounter counter;

    // cout << counter.ping(100) << endl; 
    // cout << counter.ping(3001) << endl;
    // cout << counter.ping(3002) << endl; 
    // cout << counter.ping(7000) << endl;

    // Time complexity: O(1) 
    // Space complexity: O(n) 

// 14. Remove outermost

    // Solution solution;
    // string s = "(()())(())";

    // string result = solution.removeOuterParentheses(s);
    // cout << "Result: " << result << endl;

    // Time complexity: O(n)
    // Space complexity: O(n)

// 15. Reverse linked list

    // Solution solution;

    // ListNode* head = new ListNode(1);
    // head->next = new ListNode(2);
    // head->next->next = new ListNode(3);
    // head->next->next->next = new ListNode(4);
    // head->next->next->next->next = new ListNode(5);

    // cout << "Original List: ";
    // solution.printList(head);

    // ListNode* reversedHead = solution.reverseList(head);

    // cout << "Reversed List: ";
    // solution.printList(reversedHead);    

    // Time complexity: O(n)
    // Space complexity: O(1)

// 16. Smaller than current

    // Solution solution;
    // vector<int> nums = {8, 1, 2, 2, 3};

    // vector<int> result = solution.smallerNumbersThanCurrent(nums);
    // cout << "Result: ";
    // for (int num : result) {
    //     cout << num << " ";
    // }
    // cout << endl;

    // Time complexity: O(n^2)
    // Space complexity: O(n)

// 17. Sorting the sentence

    // Solution solution;

    // string sentence = "is2 sentence4 This1 a3";
    // string sortedSentence = solution.sortSentence(sentence);

    // cout << "Sorted Sentence: " << sortedSentence << endl;

    // Time complexity: O(nlogn)
    // Space complexity: O(n)

// 18. Split string

    // Solution solution;

    // string str = "RLRRLLRLRL";

    // int balancedCount = solution.balancedStringSplit(str);

    // cout << "Balanced String Count: " << balancedCount << endl;

    // return 0;

    // Time complexity: O(n)
    // Space complexity: O(1)

// 19. First unique character

    // Solution solution;

    // string str = "leetcode";

    // int index = solution.firstUniqChar(str);

    // cout << "First unique character index: " << index << endl;

    // Time complexity: O(n)
    // Space complexity: O(k)

// 20. Maximum nesting depth

    // Solution solution;
    // string input;

    // cout << "Enter a string with parentheses: ";
    // cin >> input;

    // int depth = solution.maxDepth(input);
    // cout << "Maximum depth of parentheses: " << depth << endl;

    // Time complexity: O(n)
    // Space complexity: O(1)

    return 0;

}