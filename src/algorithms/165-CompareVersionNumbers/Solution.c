/**
 * ---------------------------- Problem Description ---------------------------
 * Given n, how many structurally unique BST's (binary search trees) that store
 * values 1...n?
 * For example,
 * Given n = 3, there are a total of 5 unique BST's.
 * 1         3     3      2      1
 *  \       /     /      / \      \
 *   3     2     1      1   3      2
 *  /     /       \                 \
 * 2     1         2                 3
 * ----------------------------------------------------------------------------
 * 
 * @author LIANG Qing
 * @Date   2015-04-02
 */

 #include <stdlib.h>
 #include <stdio.h>
 #include <string.h>

int getVersionNum(char *str, int *digits){
	/* 如果已达结尾，则认为下级版本都为0 */
    if(*str == '\0'){
        *digits = 0;
        return 0;
    }
    /* 如果该层有给出版本值，则过滤掉非数字字符 */
    if(*str == '.')
        str++;
    int count = 0;
    while(str[count] >='0' && str[count]<='9')
        count++;
    char tmp[count+1];
    strncpy(tmp, str, count);
    tmp[count] = '\0';
    *digits = count;
    return atoi(tmp);
}

int compareVersion(char *version1, char *version2){
    int count1, count2;
    while(1){
        if(getVersionNum(version1, &count1) > getVersionNum(version2, &count2))
            return 1;
        if(getVersionNum(version1, &count1) < getVersionNum(version2, &count2))
            return -1;
        /* 从当前比较级的最后一位数字的下一字符开始进入下一级比较，重置指针 */
        version1 += count1;
        version2 += count2;
        /* 如果都已没有下一级可比较，那么不再取版本号直接返回，否则将进入死循环*/
        if(*version1 == '\0' && *version2 == '\0')
        	return 0;
    }
}