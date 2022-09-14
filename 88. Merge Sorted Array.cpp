class Solution {
public:
    void merge(vector<int>& nums1, int m, vector<int>& nums2, int n) {
        
     int index1,index2;
       
        if(m>0 &&n==0){
            //cout for nums1
            sort(nums1.begin(),nums1.end());
        }else if(m==0 && n>0){
            for(int i=0;i<nums2.size();i++){
                nums1[i]=nums2[i];
            }
              sort(nums1.begin(),nums1.end());
        }else if(m>0 &&n>0){
            index1=m;
            index2=0;
            for(int i=index1;i<nums1.size()&&index2<nums2.size();i++){
                nums1[i]=nums2[index2];
                index2++;
            }
            sort(nums1.begin(),nums1.end());
        }
        
        
        
    }
};
