/**
 * ---------------------------- Problem Description ---------------------------
 * Given a positive integer, return its corresponding column title as appear in
 * an Excel sheet.
 * ----------------------------------------------------------------------------
 * 
 * @author LIANG Qing
 * @Date   2015-04-01
 */

char *convertToTitle(int n) {
    int tmp, rem, length = 0;
    tmp = n;
    /* Get length of the target string */
    while(tmp>0){
        length++;
        rem = (tmp%26 == 0 ? 26:tmp%26); // Note the case 'Z'
        tmp = (tmp - rem) / 26;
    }
    tmp = n;
    char *ret = malloc(sizeof(char) * (length+1));
    ret[length] = '\0';
    while(tmp>0){
        ret[length-1] = (tmp%26 + 25)%26 + 65;
        rem = (tmp%26 == 0 ? 26:tmp%26);
        tmp = (tmp - rem) / 26;
        length--;
    }
    return ret;
}