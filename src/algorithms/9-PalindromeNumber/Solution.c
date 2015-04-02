/**
 * ---------------------------- Problem Description ---------------------------
 * Given a positive integer, return its corresponding column title as appear in
 * an Excel sheet.
 * ----------------------------------------------------------------------------
 * 
 * @author LIANG Qing
 * @Date   2015-04-01
 */
#include <stdio.h>
#include <stdlib.h>

int getPow(int a, int b){
    int sum = 1;
    while(b>0){
        sum *= a;
        b--;
    }
    return sum;
}

bool isPalindrome(int x) {
    int tmp = x, count = 0;
    while(tmp >0){
        count++;
        tmp = (tmp - tmp%10) / 10;
    }
    tmp = x;
    int sum = 0;
    while(tmp>0){
        int rem = tmp % 10;
        sum += rem * getPow(10, count-1);
        tmp = (tmp - tmp%10) / 10;
        count--;
    }
    return sum == x;
}