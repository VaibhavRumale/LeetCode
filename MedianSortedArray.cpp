class Solution {
public:
    double findMedianSortedArrays(vector<int>& nums1, vector<int>& nums2) {
       int a= nums1.size();
       int b= nums2.size();
       int n= a+b;
       int c=0;
       vector<int> v(n) ;
       int i=0;
       int j=0;
       int l=0;
       while(i<a && j<b)
       {
           if(nums1[i]<=nums2[j])
           {
                    v[l]=nums1[i];
                    l+=1;
                    i+=1;
           }
           else
                {
                    v[l]=nums2[j];
                    l+=1;
                    j+=1;
                }


       }
       while(i<a)
       {
           v[l]= nums1[i];
           l+=1;
           i+=1;
       }
        while(j<b)
       {
           v[l]= nums2[j];
           l+=1;
           j+=1;
       
    }

    return n%2?v[n/2]:(v[n/2-1]+v[n/2])/2.0;
    }
    
};
