// 3909. Compare Sums of Bitonic Parts
// Solved
// Medium
// Topics
// premium lock icon
// Companies
// Hint
// You are given a bitonic array nums of length n.

// Split the array into two parts:

// Ascending part: from index 0 to the peak element (inclusive).
// Descending part: from the peak element to index n - 1 (inclusive).
// The peak element belongs to both parts.

// Return:

// 0 if the sum of the ascending part is greater.
// 1 if the sum of the descending part is greater.
// -1 if both sums are equal.
// Notes:

// A bitonic array is an array that is strictly increasing up to a single peak element and then strictly decreasing.
// An array is said to be strictly increasing if each element is strictly greater than its previous one (if exists).
// An array is said to be strictly decreasing if each element is strictly smaller than its previous one (if exists).
 

   
int compareBitonicSums(vector<int>& nums) {
    
        long long int sum =0;
        int add =1;
        for(int i=0;i<nums.size();i++){
            if(add){
                sum+=nums[i];
            }
            else{
                sum-=nums[i];
            }
            if(add&&nums[i]>nums[i+1]){
                sum-=nums[i];
                add = 0;
            }
               
        }
        if(sum==0) return -1;
        else if(sum>0) return 0;
        else return 1;
    }