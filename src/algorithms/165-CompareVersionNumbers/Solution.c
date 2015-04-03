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

int compareVersion(char *version1, char *version2){
    /* get next level */
    while(1){
        int count1, count2;
        // char *s1, *s2;
        int num1, num2;
        count1 = count2 = 0;
        while((*(version1+count1) != '.') && (*(version1+count1) !='\0'))
            count1++;
        while((*(version2+count2) != '.') && (*(version2+count2) !='\0'))
            count2++;
        printf("count1 = %d\n", count1);
        printf("count2 = %d\n", count2);
        char s1[count1+1];
        char s2[count2+1];
        strncpy(s1, version1, count1);
        strncpy(s2, version2, count2);
        s1[count1] = '\0';
        s2[count2] = '\0';
        printf("s1 = %s\n", s1);
        printf("s2 = %s\n", s2);
        num1 = atoi(s1);
        num2 = atoi(s2);
        printf("num1 = %d\n", num1);
        printf("num2 = %d\n", num2);
        if(num1>num2)
            return 1;
        if(num1<num2)
            return -1;
        /* Same version on this level, then check the next level */
        if(*(version1+count1) == '\0') printf("end1\n");
        if(*(version2+count2) == '\0') printf("end2\n");
        // if((*(version1+count1) == '\0') && (*(version2+count2) != '\0'))
        //     return -1;
        // if((*(version1+count1) =! '\0') && (*(version2+count2) == '\0'))
        //     return 1;
        if((*(version1+count1) == '\0') && (*(version2+count2) == '\0'))
            return 0;
        version1 += count1+1;
        version2 += count2+1;
    }
}

int main(){
	char v1[] = "1";
	char v2[] = "1.1";
	printf("%d\n", compareVersion(v1, v2));
	return 0;
}