class Solution {
public:
    double findMedianSortedArrays(vector<int>& nums1, vector<int>& nums2) {
        double val=0;
        int nums1sum=0;
        int nums2sum=0;
        vector<int>v;
        for(int i=0;i<nums1.size();i++)
        {
            v.push_back(nums1[i]);
        }
        for(int i=0;i<nums2.size();i++)
        {
            v.push_back(nums2[i]);
        }
        sort(v.begin(),v.end());
        int size=nums1.size()+nums2.size();
        if(size%2==0)
        {
            int mid1=size/2;
            return (v[mid1]+v[mid1-1])/2.0;
        }
        else
        {
            int mid=size/2;
            return v[mid];
        }        
        return 0;
    }
};
