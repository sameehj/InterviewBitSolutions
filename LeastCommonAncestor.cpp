// Question: https://www.interviewbit.com/problems/least-common-ancestor/

/**
 * Definition for binary tree
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode(int x) : val(x), left(NULL), right(NULL) {}
 * };
 */
 
bool FindNodePath(TreeNode * node, vector<TreeNode *> &path, int val)
{
    if (node == nullptr)
    {
        return false;
    }

    path.push_back(node);
    
    if (node->val == val)
    {
        return true;
    }
    
    if ((FindNodePath(node->left, path, val)) ||
        (FindNodePath(node->right, path, val)))
    {
        return true;
    }
    
    path.pop_back();
    return false;
}
 
int Solution::lca(TreeNode* A, int B, int C) {
    vector<TreeNode *> first_path;
    vector<TreeNode *> second_path;
    int i = 0;
    int ret = -1;

    if(!FindNodePath(A, first_path, B) || !FindNodePath(A, second_path, C))
    {
        return -1;
    }
    while (i < first_path.size() && i < second_path.size())
    {
        if (first_path[i] != second_path[i])
        {
            break;
        }
        else
        {
            ret = first_path[i]->val;
        }
        i++;
    }
    
    return ret;
}
