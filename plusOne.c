/**
 * Return an array of size *returnSize.
 * Note: The returned array must be malloced, assume caller calls free().
 * Given a non-negative number represented as an array of digits, plus one to the number.
 * The digits are stored such that the most significant digit is at the head of the list.
 */
int* plusOne(int* digits, int digitsSize, int* returnSize) {
    
    if(digitsSize == 0) return NULL;
    
    int i = digitsSize-1;
    
    *returnSize = digitsSize;
    
    while(i>=0&&*(digits+i)==9) --i;
    
    *returnSize += (i<0);
    
    int *p = (int *)malloc(sizeof(int) * (*returnSize));
    
    
    if(i==-1){
        *p=1;
        int *pp=p+1;
        //while(*(pp++)!='\0') {*pp=0;} //This expression is fine however cannot pass leetcode OJ
        for (int j = 1; j <= digitsSize; ++j) *(p + j) = 0;
        return p;
    }
    
    
    for (int j = 0; j < i; ++j) *(p + j) = *(digits + j);
    *(p + i) = *(digits + i) + 1;
    for (int k = i + 1; k < digitsSize; ++k) *(p + k) = 0;

    return p;
    
}