class Solution {
public:
    int search(vector<int>& nums, int target) {
        int n=nums.size();
        int start=0;
        int end=n-1;
        
        while(start<=end){
            int mid=start+(end-start)/2;
            
            
            if(nums[mid]==target) return mid;
            
            //checking i left array is sorted
            if(nums[start]<=nums[mid]){
                //if it is then checking is element is present is that region
                if(nums[start]<=target and nums[mid]>target){
                    end=mid-1;
                }
                //if its not then we are eleminating that region and move to right side
                else{
                    start=mid+1;
                }
            }
            //else part is if left region is not sorted then right region must be sorted
            else{
                //then we are checking if element present in that region
                if(nums[end]>=target and nums[mid]<target){
                    start=mid+1;
                }
                
                else end=mid-1;
            }
            
        }
        return -1;
    }
};
