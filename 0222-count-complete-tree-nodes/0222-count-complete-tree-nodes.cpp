class Solution {
public:

    int totalNode(TreeNode* root){
        
        if(root == NULL)
            return 0;

        int left = totalNode(root->left);
        int right = totalNode(root->right);

        return left + right + 1;
    }

    int countNodes(TreeNode* root) {
        return totalNode(root);
    }
};