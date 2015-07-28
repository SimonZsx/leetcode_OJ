/*

Given an integer, write a function to determine if it is a power of two

*/


public class Solution {
    public boolean isPowerOfTwo(int n) {
        int m=n;
        if(n<1){return false;}
        while(n>1){
            m=n;
            n=n>>1;
            if(m!=n<<1){return false;}
        }
        return true;
        
    }
}