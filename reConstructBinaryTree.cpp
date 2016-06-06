/*
 输入某二叉树的前序遍历和中序遍历的结果，请重建出该二叉树。假设输入的前序遍历和中序遍历的结果中都不含重复的数字。例如输入前序遍历序列{1,2,4,7,3,5,6,8}和中序遍历序列{4,7,2,1,5,3,8,6}，则重建二叉树并返回。
*/
/**
 * Definition for binary tree
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode(int x) : val(x), left(NULL), right(NULL) {}
 * };
 */
class Solution {
public:
    struct TreeNode* reConstructBinaryTree(vector<int> pre,vector<int> in) {
        int inlen = in.size();
        if(inlen == 0)
            return NULL;
        //left_pre left_in 存储根节点左子树的两个遍历序列
        //rigth_pre right_in 存储根节点右子树的两个遍历序列
        vector<int>left_pre,right_pre,left_in,right_in;
        //创建根节点,根节点为前序遍历第一个结点
        TreeNode* head = new TreeNode(pre[0]);
        //找到根节点在中序遍历的位置
        int location = 0;
        int i = 0;
        for(i = 0;i<inlen;i++)
        {
            if(in[i] == pre[0])
            {
                location = i;
                break;
            }
        }
        //找出左子树
        for(i = 0;i<location;i++)
        {
            left_pre.push_back(pre[i+1]);
            left_in.push_back(in[i]);
        }
        for(i = location+1;i<inlen;i++)
        {
            right_pre.push_back(pre[i]);
            right_in.push_back(in[i]);
        }
        //递归调用
        head->left = reConstructBinaryTree(left_pre,left_in);
        head->right = reConstructBinaryTree(right_pre,right_in);
        return head;
       }
};