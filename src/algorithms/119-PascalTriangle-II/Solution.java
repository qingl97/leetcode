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
 * @Date   2015-04-09
 */

import java.util.List;
import java.util.ArrayList;
import java.lang.Math;

public class Solution {
    public static List<Integer> getRow(int rowIndex) {
        List<Integer> ret = new ArrayList<Integer>();
        int i,comb;
        comb = 1;
        for(i=0;i<rowIndex+1; i++) ret.add(comb);
        ret.set(0, comb);
        ret.set(rowIndex, comb);
        if(rowIndex<=1) return ret;
        for(i=rowIndex; i<=rowIndex/2; i++){
            comb *= (rowIndex-i+1)/i;
            ret.set(i, comb);
            ret.set(rowIndex-i, comb);
        }
        return ret;
    }

    public static void main(String args[]){
        for(int i=0; i<10; i++)
            System.out.println(getRow(i).toString());
    }
}