/**
 * ---------------------------- Problem Description ---------------------------
 * Given a string, determine if it is a palindrome, considering only 
 * alphanumeric characters and ignoring cases.
 *
 * For example,
 * "A man, a plan, a canal: Panama" is a palindrome.
 * "race a car" is not a palindrome.
 * ----------------------------------------------------------------------------
 * 
 * @author LIANG Qing
 * @Date   2015-04-01
 */
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <stdbool.h>
#include <ctype.h>

bool equals(char *c1, char *c2){
    if((*c1 >= 48 && *c1 <= 57) || (*c2 >= 48 && *c2 <= 57)) {
        if(*c1 == *c2)
            return true;
        return false;
    }
    return tolower(*c1) == tolower(*c2);
}

bool isAlphanumeric(char *c){
    return ((*c >= 65 && *c <= 90)  || 
            (*c >= 97 && *c <= 122) || 
            (*c >= 48 && *c <= 57)) ?
        true:false;
}

bool isPalindrome(char *s) {
    if(s == NULL || *s == '\0')
        return true;
    int length = strlen(s);
    char *p_head = s, *p_tail = s+length-1;
    int head_offset = 0;
    int tail_offset = 0;
    while(1){
        /* 正向获取下一个字母 */
        while(!isAlphanumeric(p_head+head_offset)){
            if(head_offset == length-1)
                return true;
            head_offset++;
        }
        if(p_head+head_offset == p_tail-tail_offset+1 || head_offset == length-1)
            return true;   
        /* 逆向获取下一个字母 */
        while(!isAlphanumeric(p_tail-tail_offset))
            tail_offset++;
        if(p_head+head_offset == p_tail-tail_offset)
            return true;
        if(!equals(p_head+head_offset, p_tail-tail_offset))
            return false;
        else{
            head_offset++;
            tail_offset++;
        }
    }
}