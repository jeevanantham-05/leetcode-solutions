/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     struct TreeNode *left;
 *     struct TreeNode *right;
 * };
 */
struct TreeNode* searchBST(struct TreeNode* root, int val) {
    if(root ==NULL)
    return NULL;
    struct TreeNode* temp = root;

    while(temp != NULL)
    {
        if(val < temp->val)
        temp = temp->left;
        else if(val > temp->val)
        temp= temp->right;
        else if(val == temp->val)
        return temp;
    }

    return NULL;

    
}