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

int getPow(int a, int b){
    int sum=1;
    while(b){
        sum *= a;
        --b;
    }
    return sum;
}

int titleToNumber(char *s) {
    char *tmp = s;
    int length = 0;
    while(*tmp != '\0'){
        ++length;
        tmp = s+length;
    }
    int sum = 0, count = 0;
    tmp = s;
    while(count != length){
    	count++;
        sum += (*tmp-64)*getPow(26, length-count);
        tmp = s + count;
    }
    return sum;
}