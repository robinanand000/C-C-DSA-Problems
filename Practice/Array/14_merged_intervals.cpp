# include<iostream>
# include<vector>

using namespace std;
class Solution {
public:
    vector<vector<int>> merge(vector<vector<int>>& intervals) {
        vector<vector<int>> merged_intervals;
        if(intervals.size()==0){
            return merged_intervals;
        }
        
       std :: sort(intervals.begin(),intervals.end());
        vector<int> temp_intervals=intervals[0];
        
        for(auto it: intervals){
            if(it[0]<=temp_intervals[1]){
                temp_intervals[1]=max(it[1],temp_intervals[1]);
                
            }
            else{
                merged_intervals.push_back(temp_intervals);
                temp_intervals=it;
            }
        }
        
        merged_intervals.push_back(temp_intervals);
        return merged_intervals;
    }
};
int main(){
    
    return 0;
}
