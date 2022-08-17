#include<iostream>
#include<cmath>
#include<vector>
using namespace std;
vector<int> sort_Array(vector<int> &nums){
    int gap=ceil((float)nums.size()/2);

    while (gap>0){
        int i=0;
        int j=gap;
        while(j<nums.size()){
            if(nums[i]>nums[j]){
                swap(nums[i],nums[j]);
            }
            i++;
            j++;
        }
        if(gap==1){
            gap=0;
        }
        else gap=ceil((float)gap/2);
    }
    return nums;
}

int main(){
    vector<int> vec{1,2,3,2,5,6};
    vector<int> ans = sort_Array(vec);
    for(int i=0;i<ans.size();i++){
        cout<<ans[i]<<" ";
    }
    return 0;
};