#ifndef FUNCTIONS_H
#define FUNCTIONS_H
#include <iostream>
#include <vector>
#include <stack>
#include <string>
#include <queue>
#include <algorithm>
#include <unordered_map>
using namespace std;

struct ListNode {
    int val;
    ListNode* next;
    ListNode(int x) : val(x), next(nullptr) {}
};

struct TreeNode {
    int val;
    TreeNode* left;
    TreeNode* right;
    TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
};

class Solution {
private:

    queue<int> requests;

public:

    int arrayPairSum(vector<int>& nums) {
        sort(nums.begin(), nums.end());

        int sum = 0;
        for (int i = 0; i < nums.size(); i += 2) {
            sum += nums[i]; 
        }

        return sum;
    }

    int firstUniqChar(string s) {
        unordered_map<char, int> frequency;

        for (char ch : s) {
            frequency[ch]++;
        }

        for (int i = 0; i < s.length(); i++) {
            if (frequency[s[i]] == 1) {
                return i;
            }
        }

        return -1;
    }

    vector<int> finalPrices(vector<int>& prices) {
        vector<int> result;
        for (int i = 0; i < prices.size(); i++) {
            int discount = 0;
            for (int j = i + 1; j < prices.size(); j++) {
                if (prices[j] <= prices[i]) {
                    discount = prices[j];
                    break;
                }
            }
            result.push_back(prices[i] - discount);
        }
        return result;
    }

    int findTheWinner(int n, int k) {
        vector<int> friends(n);

        for (int i = 0; i < n; i++) {
            friends[i] = i + 1;
        }

        int currentFriend = 0;

        while (friends.size() > 1) {
            currentFriend = (currentFriend + k - 1) % friends.size();
            friends.erase(friends.begin() + currentFriend);
        }

        return friends[0];
    }

    int firstUniqChar(string s) {
        unordered_map<char, int> frequency;

        for (char ch : s) {
            frequency[ch]++;
        }

        for (int i = 0; i < s.length(); i++) {
            if (frequency[s[i]] == 1) {
                return i;
            }
        }

        return -1;
    }

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

    bool hasCycle(ListNode* head) {
        if (head == nullptr || head->next == nullptr) {
            return false;
        }

        ListNode* slow = head;
        ListNode* fast = head;

        while (fast != nullptr && fast->next != nullptr) {
            slow = slow->next;
            fast = fast->next->next;

            if (slow == fast) {
                return true;
            }
        }

        return false;
    }

    int maximum69Number(int num) {
        string numStr = to_string(num);

        for (char& c : numStr) {
            if (c == '6') {
                c = '9';
                break;
            }
        }

        return stoi(numStr);
    }

    int maximumCount(vector<int>& nums) {
        int positiveCount = 0;
        int negativeCount = 0;

        for (int num : nums) {
            if (num > 0) {
                positiveCount++;
            } else if (num < 0) {
                negativeCount++;
            }
        }

        return max(positiveCount, negativeCount);
    }

    int maxDepth(TreeNode* root) {
        if (root == nullptr) {
            return 0;
        }
        
        int leftDepth = maxDepth(root->left);
        int rightDepth = maxDepth(root->right);
        
        return 1 + max(leftDepth, rightDepth);
    }

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

    int missingNumber(vector<int>& nums) {
        int n = nums.size();
        
        int sum = (n * (n + 1)) / 2;
        
        int arraySum = 0;
        for (int num : nums) {
            arraySum += num;
        }
        
        int missingNum = sum - arraySum;
        
        return missingNum;
    }

    int countNegatives(vector<vector<int>>& grid) {
        int m = grid.size();
        int n = grid[0].size();
        int count = 0;
        
        int row = m - 1;
        int col = 0;
        
        while (row >= 0 && col < n) {
            if (grid[row][col] < 0) {
                count += (n - col);
                row--;
            } else {
                col++;
            }
        }
        
        return count;
    }

    int RecentCounter() {}

    int ping(int t) {
        requests.push(t);
        while (!requests.empty() && t - requests.front() > 3000) {
            requests.pop();
        }
        return requests.size();
    }

    string removeOuterParentheses(const string& s) {
        string result = "";
        stack<char> parenthesesStack;

        int start = 0;
        for (int i = 0; i < s.length(); i++) {
            if (s[i] == '(') {
                parenthesesStack.push('(');
            } else if (s[i] == ')') {
                parenthesesStack.pop();
                if (parenthesesStack.empty()) {
                    result += s.substr(start + 1, i - start - 1);
                    start = i + 1;
                }
            }
        }

        return result;
    }

    ListNode* reverseList(ListNode* head) {
        ListNode* prev = nullptr;
        ListNode* current = head;
        ListNode* next = nullptr;

        while (current != nullptr) {
            next = current->next;
            current->next = prev;
            prev = current;
            current = next;
        }

        return prev;
    }

    void printList(ListNode* head) {
        ListNode* current = head;
        while (current != nullptr) {
            cout << current->val << " ";
            current = current->next;
        }
        cout << endl;
    }

    vector<int> smallerNumbersThanCurrent(vector<int>& nums) {
        vector<int> result;
        for (int i = 0; i < nums.size(); i++) {
            int count = 0;
            for (int j = 0; j < nums.size(); j++) {
                if (nums[i] > nums[j]) {
                    count++;
                }
            }
            result.push_back(count);
        }
        return result;
    }

    string sortSentence(string s) {
        vector<string> words;
        string word;
        for (char c : s) {
            if (c == ' ') {
                words.push_back(word);
                word.clear();
            } else {
                word += c;
            }
        }
        words.push_back(word);

        for (int i = 0; i < words.size(); i++) {
            for (int j = i + 1; j < words.size(); j++) {
                if (words[j].back() < words[i].back()) {
                    swap(words[i], words[j]);
                }
            }
        }

        string sortedSentence;
        for (const string& word : words) {
            sortedSentence += word.substr(0, word.length() - 1);
            sortedSentence += ' ';
        }
        sortedSentence.pop_back();

        return sortedSentence;
    }

    int balancedStringSplit(string s) {
        int count = 0;
        int balance = 0;

        for (char ch : s) {
            if (ch == 'L') {
                balance++;
            } else {
                balance--;
            }

            if (balance == 0) {
                count++;
            }
        }

        return count;
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

void printInOrder(TreeNode* root) {
    if (root == nullptr) {
        return;
    }
    printInOrder(root->left);
    cout << root->val << " ";
    printInOrder(root->right);
}

#endif