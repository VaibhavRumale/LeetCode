class Solution {
public:
    int firstMissingPositive(vector<int>& nums) {
        int ans=1;
        int co=nums.size();
        int m=INT_MAX;
        int counter2=0;
        int counter=0;
        for(int i=0; i<co; i++)
        {   if(nums[i]>co)
            {
                counter2+=1;
            }
            if(nums[i]<=0 )
            {   if(nums[i]<m)
            {
                   m=nums[i];
                
            }
            counter+=1;
             
            }
        }
        if(counter2==nums.size()+1)
        return 1;
        if(m<0 && counter==nums.size())
        return 1;
        if((counter2+counter)==nums.size())
        return 1;
        
        for (int i = 0; i<nums.size(); i++)
        {
            while (nums[i] > 0 && nums[i] <= co && nums[nums[i] - 1] != nums[i])
            {
                int temp = nums[nums[i]-1];
                nums[nums[i]-1] = nums[i];
                nums[i] = temp;
            }
            
            
        
        }
        
        if(nums.size()==1)
        {
            if(nums[0]==1)
            return 2;
            else
            return 1;

        }
        for (int i = 0; i < nums.size(); i++) {
            
            if (nums[i] != i+1 ) {
                return i+1;
            }
        }

        return co+1;
    }
};
