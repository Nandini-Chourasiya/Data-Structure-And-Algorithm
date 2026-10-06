class Solution {
public:
    double findMedianSortedArrays(vector<int>& nums1, vector<int>& nums2) {
         for(int i=0; i<nums2.size(); i++){
          nums1.push_back(nums2[i]);
       }
        sort(nums1.begin(),nums1.end());
        int mid = nums1.size()/2;
        if(nums1.size()%2 == 0){
            double add = nums1[mid-1]+nums1[mid];
          return add/2;
        }
          return nums1[mid];
    }
};