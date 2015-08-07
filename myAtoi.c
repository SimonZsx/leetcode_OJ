/*

Implement atoi to convert a string to an integer.

Hint: Carefully consider all possible input cases. If you want a challenge, please do not see below and ask yourself what are the possible input cases.

Notes: It is intended for this problem to be specified vaguely (ie, no given input specs). You are responsible to gather all the input requirements up front.

*/


int myAtoi(char* str) {
    
    int isNeg = 0;
    
    int num=0;
    
    while( *(str++) == 32 );
    
    str--;
    
    if(*str==45){
        isNeg = 1;
        str++;
    }
    else if(*str==43){
        isNeg = 0;
        str++;
    }
    else{
        isNeg = 0;
    }
    
    while( *str >=48 && *str <=57 ){

        if(num>INT_MAX/10 || num*10 > INT_MAX-(*str - 48)){
            return (isNeg?INT_MIN:INT_MAX);
        }
        
        num=num*10+(int)(*str)-48;
        
        str++;
        
    }
    
    return (isNeg?(0-num):num);
    
}