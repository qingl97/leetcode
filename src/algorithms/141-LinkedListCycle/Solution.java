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
 * class ListNode {
 *     int val;
 *     ListNode next;
 *     ListNode(int x) {
 *         val = x;
 *         next = null;
 *     }
 * }
 */
public class Solution {
	/* Solution using Hashmap */
    /*public boolean hasCycle(ListNode head) {
        if(head == null)
            return false;
        HashMap hp = new HashMap();
        ListNode cursor = head;
        while(!hp.containsKey(cursor.toString())) {
            hp.put(cursor.toString(), cursor);
            cursor = cursor.next;
            if(cursor == null)
                return false;
        }
        return true;
    }*/
    
    /* Solution using two pointers without using extra spaces */
    public boolean hasCycle(ListNode head) {
        if(head == null) return false;
        ListNode first = head;
        ListNode second = head;

        while(first != null){
            if(second == null || second.next == null) return false;
            first = first.next;
            second = second.next.next;
            if(first == second) return true;
        }
        return false; 
    } 
}