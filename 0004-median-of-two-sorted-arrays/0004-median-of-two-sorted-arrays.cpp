class Solution {
public:
    double findMedianSortedArrays(vector<int>& nums1, vector<int>& nums2) {
        vector<int>result(nums1.size()+nums2.size());
        merge(nums1.begin(),nums1.end(),
            nums2.begin(),nums2.end(),
            result.begin());
        //"Key Idea:Resultant of merging the two sorted array will always be a sorted array"
        //"Thou time complexity is O(m+n)"
        int m=nums1.size();
        int n=nums2.size();
        int h=(m+n)-1;
        int mid;
            if((h+1)%2!=0)
                //Use "h+1" because I am searching the position not the index
            {
                mid=h/2;
                int ans=result[mid];
                return ans;
            }
            else
            {
                mid=h/2;
                double ans=(result[mid+1]+result[mid])*0.5;
                return ans;
            }
        return 0;
    }
};
