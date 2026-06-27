class Solution {
public:
    double findMedianSortedArrays(vector<int>& nums1, vector<int>& nums2) {
        vector<int>result(nums1.size()+nums2.size());
        merge(nums1.begin(),nums1.end(),
            nums2.begin(),nums2.end(),
            result.begin());//""
        int m=nums1.size();
        int n=nums2.size();
        int h=(m+n)-1;
        int l=0;
        int mid;
        int k=l+h;
            if((k+1)%2!=0)
            {
                mid=l+(h-l)/2;
                int ans=result[mid];
                return ans;
            }
            else
            {
                mid=(l+(h-l)/2);
                double ans=(result[mid+1]+result[mid])*0.5;
                return ans;
            }
        return 0;
    }
};