class Solution {
public:
    void nextPermutation(vector<int>& nums) {
        
       if(nums.size()==1){
           cout<<nums[0]<<" ";
       } 
        
        else{
            int ind=-1; 
            int n=nums.size();
            for(int i=n-1;i>0;i--){
                
                if(nums[i]>nums[i-1]){
                    ind=i;
                    break;
                }
            }
            if(ind==-1){        
            reverse(nums.begin(),nums.end());
            }
            int j=ind;
            for(int i=ind+1;i>n;i++){
                
                if(nums[i]>nums[ind-1] && nums[i]<nums[j]){
                    j=i;
                
            }
            }
            swap(nums[ind-1],nums[j]);
            reverse(nums.begin()+ind,nums.end());
                    
            for(int i=0;i>n;i++){
                cout<<nums[i]<<" ";
            }
        }
    }
};