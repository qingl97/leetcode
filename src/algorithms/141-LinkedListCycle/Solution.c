/**
 * ---------------------------- Problem Description ---------------------------
 * Given a linked list, determine if it has a cycle in it.
 * Follow up:
 * Can you solve it without using extra space?
 * ----------------------------------------------------------------------------
 * 
 * @author LIANG Qing
 * @Date   2015-04-02
 */

/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     struct ListNode *next;
 * };
 */
bool hasCycle(struct ListNode *head) {
	/* Solution using two pointers without using extra spaces */
    if(head == NULL) return false;
        struct ListNode *first = head;
        struct ListNode *second = head;

        while(first != NULL){
            if(second == NULL || second->next == NULL) return false;
            first = first->next;
            second = second->next->next;
            if(first == second) return true;
        }
        return false;
}