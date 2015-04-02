/**
 * ---------------------------- Problem Description ---------------------------
 * Write a function that takes an unsigned integer and returns the number of 
 * ’1' bits it has (also known as the Hamming weight).
 * 
 * For example, the 32-bit integer ’11' has binary representation 
 * 00000000000000000000000000001011, so the function should return 3.
 * ----------------------------------------------------------------------------
 * 
 * @author LIANG Qing
 * @Date   2015-04-01
 */

public class Solution {
    // you need to treat n as an unsigned value
    /*public static int hammingWeight(int n) {
        int count = 0, tmp = n;
        while(tmp>0){
            if(Math.abs(tmp%2) == 1) count++;
            tmp = (tmp - tmp%2) / 2;
        }
        return count;
    }*/

    public static int hammingWeight(int n) {
        int count = 0;
        while(n!=0) {
            /* Solution 1 */
            /*count += n&1;
            n = n>>>1;*/
            
            /* Solution 2 */
            n &= n-1;
            count++
        }
        return count;
    }
}
