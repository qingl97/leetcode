/**
 * ---------------------------- Problem Description ---------------------------
 * Given two binary trees, write a function to check if they are equal or not.
 * Two binary trees are considered equal if they are structurally identical and 
 * the nodes have the same value.
 * ----------------------------------------------------------------------------
 * 
 * @author LIANG Qing
 * @Date   2015-04-01
 */

/**
 * Definition for binary tree
 * struct TreeNode {
 *     int val;
 *     struct TreeNode *left;
 *     struct TreeNode *right;
 * };
 */
bool isSameTree(struct TreeNode *p, struct TreeNode *q) {
    if(p == NULL ^ q == NULL)
    	return false;
	if(p == NULL && q == NULL)
		return true;
	if(p->val != q->val)
		return false;
	else
    	return isSameTree(p->left, q->left) == true && isSameTree(p->right, q->right) == true;
}