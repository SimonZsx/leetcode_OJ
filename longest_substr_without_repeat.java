/*

Given a string, find the length of the longest substring without repeating characters. For example, the longest substring without repeating letters for "abcabcbb" is "abc", which the length is 3. For "bbbbb" the longest substring is "b", with the length of 1.

*/

public class Solution {
    	public int lengthOfLongestSubstring(String s) {
		
		int flag=0;
		int max=0;
		int count=0;
		
		for(int i=0; i<s.length();i++){
			
			Boolean got=false;
			
			char thechar=s.charAt(i);
			
			for(int j=flag; j<i; j++){
				if(thechar==s.charAt(j)){
					got=true;
					flag=j+1;
					break;
				}
			}
			
			if(got){
				if(count>max){max=count;}
				count=i-flag+1;	  
			}		
			else{
				count++;//System.out.println("Gohere1");
			}
			
		}
		if(count>max){max=count;}
		return max;
    }
}