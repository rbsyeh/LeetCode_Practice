class Solution {
public:
    double findMedianSortedArrays(vector<int>& nums1, vector<int>& nums2) {
        
        double ans, temp;
        
        int mid_num;
        
        if((nums1.size()+nums2.size())%2==1)
        {
            mid_num=(nums1.size()+nums2.size())/2+1;
            
            for(int i=0, j=0, time=0; time<mid_num; time++)
            {
                
                if(nums2.size()==0)
                {
                    ans=nums1[i];
                    i++;
                }
                
                else if(nums1.size()==0)
                {
                    ans=nums2[j];
                    j++;
                }
                
                else if(i==nums1.size())
                {
                    ans=nums2[j];
                    j++;
                }
                
                else if(j==nums2.size())
                {
                    ans=nums1[i];
                    i++;
                }
                
                else if(nums1[i]<=nums2[j])
                {
                    ans=nums1[i];
                    i++;
                }
                
                else if(nums1[i]>nums2[j])
                {
                    ans=nums2[j];
                    j++;
                }
            }
        }
            
        else
        {
            mid_num=(nums1.size()+nums2.size())/2;
                    
            for(int i=0, j=0, time=0; time<mid_num+1; time++)
            {
                if(nums2.size()==0)
                {
                    ans=nums1[i];
                    i++;
                }
                
                else if(nums1.size()==0)
                {
                    ans=nums2[j];
                    j++;
                }
                
                else if(i==nums1.size())
                {
                    ans=nums2[j];
                    j++;
                }
                
                else if(j==nums2.size())
                {
                    ans=nums1[i];
                    i++;
                }
                
                else if(nums1[i]<=nums2[j])
                {
                    ans=nums1[i];
                    i++;
                }
                
                else if(nums1[i]>nums2[j])
                {
                    ans=nums2[j];
                    j++;
                }
                
                if(time==mid_num-1)
                    temp=ans;
            }
            
            ans=(ans+temp)/2;
        }
        
        return ans;
            
        
    }
};
