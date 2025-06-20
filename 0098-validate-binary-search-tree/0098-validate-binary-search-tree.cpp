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
    vector<int> vec;
    void inorder(TreeNode* root)
    {
        if(root==NULL) return;
        inorder(root->left);
        cout<<root->val<<" ";
        vec.push_back(root->val);
        inorder(root->right);
    }
    bool isValidBST(TreeNode* root) {
        inorder(root);

        for(int i=0; i<vec.size(); i++)
        {
            for(int j=i+1; j<vec.size(); j++)
            {
                if(vec[i]>vec[j]) return false;
                else if(vec[i]==vec[j]) return false;
            }
        }

        return true;
    }
};