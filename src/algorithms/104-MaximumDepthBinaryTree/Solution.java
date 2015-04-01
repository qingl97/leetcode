/**
 * ---------------------------- Problem Description ---------------------------
 * Given a binary tree, find its maximum depth
 * ----------------------------------------------------------------------------
 * 
 * @author LIANG Qing
 * @Date   2015-03-20
 */

/**
 * Definition for binary tree
 * public class TreeNode {
 *     int val;
 *     TreeNode left;
 *     TreeNode right;
 *     TreeNode(int x) { val = x; }
 * }
 */
public class Solution {
    public int maxDepth(TreeNode root) {
        if(root == null)
            return 0;
        int left_height = maxDepth(root.left);
        int right_height = maxDepth(root.right);
        return left_height >= right_height ? left_height+1:right_height+1;
    }
}
