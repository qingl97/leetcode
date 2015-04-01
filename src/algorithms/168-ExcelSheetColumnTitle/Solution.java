/**
 * ---------------------------- Problem Description ---------------------------
 * Given a positive integer, return its corresponding column title as appear in
 * an Excel sheet.
 * ----------------------------------------------------------------------------
 * 
 * @author LIANG Qing
 * @Date   2015-04-01
 */

public class Solution {
    public String convertToTitle(int n) {
        int tmp = n;
        int index, length = 0;
        StringBuffer buf = new StringBuffer();
        while(tmp>0){ // 输入为零时即表示所有位都已遍历到
            index = tmp % 26; // 余数即当前最低位字符的索引，注意 Z 的计算出的索引是0
            if(index == 0) { 
                buf.append("Z");
                tmp = (tmp - 26) / 26; // 向右移一位作为下次输入
            } else {
                buf.append(Character.toChars(index+64));
                tmp = (tmp - index) / 26;
            }
        }
        return new StringBuilder(buf).reverse().toString();
    }
}