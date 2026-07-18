/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode() : val(0), left(nullptr), right(nullptr) {}
 *     TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
 *     TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
 * };
 */

class Solution {
public:
    int depth(TreeNode* root){
        if(root==NULL){
            return 0;
        }

        return 1 + std::max(depth(root->left), depth(root->right));
    }

    int diameterOfBinaryTree(TreeNode* root) {
        if(root==NULL){
            return 0;
        }

        int lHeight = depth(root->left);
        int rHeight = depth(root->right);
        int diameter = lHeight + rHeight;
        int childMax = max(diameterOfBinaryTree(root->left),diameterOfBinaryTree(root->right));
        return max(diameter,childMax);
    }
};
