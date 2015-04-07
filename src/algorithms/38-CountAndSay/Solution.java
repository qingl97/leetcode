/**
 * ---------------------------- Problem Description ---------------------------
 * The count-and-say sequence is the sequence of integers beginning as follows:
 * 1, 11, 21, 1211, 111221, ...
 * 
 * 1 is read off as "one 1" or 11.
 * 11 is read off as "two 1s" or 21.
 * 21 is read off as "one 2, then one 1" or 1211.
 *
 * Given an integer n, generate the nth sequence.
 * Note: The sequence of integers will be represented as a string.
 * ----------------------------------------------------------------------------
 * 
 * @author LIANG Qing
 * @Date   2015-04-02
 */

public class Solution {
    public static String countAndSay(int n) {
        String input = Integer.toString(1);
        if(n == 1)
        	return input;
        for(int i=0; i<n-1; i++){
            int idx = 0;
            int count = 1;
            StringBuilder buf = new StringBuilder();
            /* calculate the i(th) sequence */
            while(idx<input.length()){
                if(idx == input.length()-1){
                    buf.append(count).append(input.charAt(idx));
                    count = 1;idx++;
                }
                else if(input.charAt(idx) == input.charAt(idx+1)){
                    idx++;count++;
                } else{
                    buf.append(count).append(input.charAt(idx));
                    count = 1;idx++;
                }
            }
            input = buf.toString();
        }
        return input;
    }
}