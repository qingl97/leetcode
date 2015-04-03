/**
 * ---------------------------- Problem Description ---------------------------
 * Given an array of integers, find two numbers such that they add up to a 
 * specific target number.
 * 
 * The function twoSum should return indices of the two numbers such that they 
 * add up to the target, where index1 must be less than index2. Please note 
 * that your returned answers (both index1 and index2) are not zero-based.
 *
 * You may assume that each input would have exactly one solution.
 *
 * Input  : numbers={2, 7, 11, 15}, target=9
 * Output : index1=1, index2=2
 * ----------------------------------------------------------------------------
 * 
 * @author LIANG Qing
 * @Date   2015-04-01
 */
#include <stdio.h>
#include <stdlib.h>

int *twoSum(int numbers[], int n, int target) {
    int i, j;
    int *ret = malloc(sizeof(int) * 2);
    for(i=0; i<n; i++){
        for(j=i; j<n; j++){
            if(numbers[i] + numbers[j] == target){
                ret[0] = i+1;
                ret[1] = j+1;
                return ret;
            }
        }
    }
    return NULL;
}

int main(){
    int nums[] = {-1,-2,-3,-4,-5};
    int *indexs = twoSum(nums, 5, -8);

    printf("index1 = %d\nindex2 = %d", *indexs, *(indexs+1));
    free(indexs);
    return 0;
}