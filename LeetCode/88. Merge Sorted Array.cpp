class Solution {
public:
    void merge(vector<int>& nums1, int m, vector<int>& nums2, int n) {
        if(n==nums1.size()){
            nums1=nums2;
            return;
        }
        int k=nums1.size()-1,i=nums1.size()-nums2.size()-1,j=n-1;
        while(j>=0){
            if(i!=-1 && nums1[i] >= nums2[j]){
                nums1[k]=nums1[i];
                k--;i--;
            }else{
                nums1[k]=nums2[j];
                k--;j--;
            }
        }
    }
};