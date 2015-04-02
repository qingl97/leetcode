/**
 * ---------------------------- Problem Description ---------------------------
 * Given a column title as appear in an Excel sheet, return its corresponding 
 * column number.
 *
 * For example:
 *
 *   A -> 1
 *   B -> 2
 *   C -> 3
 *   ...
 *   Z -> 26
 *   AA -> 27
 *   AB -> 28 
 * ----------------------------------------------------------------------------
 * 
 * @author LIANG Qing
 * @Date   2015-04-01
 */

public class Solution {
    public int titleToNumber(String s) {
        int sum = 0;
        int index = 0;
        int length = s.length();
        while(index != length) {
            sum += ((int)s.charAt(index) - 64) * (int)Math.pow(26, length - index -1);
            ++index;
        }
        return sum;
    }
}