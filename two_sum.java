/*

Given an array of integers, find two numbers such that they add up to a specific target number.

The function twoSum should return indices of the two numbers such that they add up to the target, where index1 must be less than index2. Please note that your returned answers (both index1 and index2) are not zero-based.

You may assume that each input would have exactly one solution.

Input: numbers={2, 7, 11, 15}, target=9
Output: index1=1, index2=2

*/
import java.util.Hashtable;


public class Solution {

     public int[] twoSum(int[] nums, int target) {
				
				Hashtable<Integer,Integer> ht=new Hashtable<Integer,Integer>();
				
				
				for (int i=0; i<nums.length ; i++ ){				
					ht.put(nums[i], i);
				}
				
				for (int j=0; j<nums.length ; j++ ){

					Integer rt = ht.get(target-nums[j]);
					
					if(rt != null){
					    
						ht.remove(target-nums[j]);

						Integer lt = ht.get(nums[j]);
						
						if(lt==null){
						    
							for (int i=0 ; i< rt ; i++){
								if (nums[i]==nums[j]){lt=i;}
							}
							
						}
						
						if(lt!=null){return (new int[]{lt+1,rt+1});}
						
					}
					
				} 
				
				return null;
		         
		    }
	
}