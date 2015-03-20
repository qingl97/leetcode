/**
 * ---------------------------- Problem Description ---------------------------
 * Given an array of integers, every element appears twice except for one. Find 
 * that single one.
 * Note:
 * Your algorithm should have a linear runtime complexity. Could you implement 
 * it without using extra memory?
 * ----------------------------------------------------------------------------
 * 
 * @author LIANG Qing
 * @Data   2015-03-20
 */

public class Solution {
	/**
	 * Using exclusive-or ("xor") operator '^'. 
	 * The value of single integer with odd times of appearances will be 
	 * restored finally when all '^' operations terminate.
	 * 
	 * Complexity : O(n) without extra memory.
	 */
	public int singleNumber(int[] A) {
		int tmp = 0;
		for(int i=0; i<A.length; i++) {
			tmp ^= A[i];
		}
		return tmp;
	}
}
