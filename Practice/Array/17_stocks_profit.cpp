# include<iostream>
using namespace std;
class Solution {
public:
    int maxProfit(vector<int>& arr) {
        
        int n=arr.size();
        int min=arr[0];
        int max_profit=0;
        for(int i=1;i<n;i++){
            if(arr[i]>min){
                if((arr[i]-min)>max_profit){
                    max_profit=arr[i]-min;
                }
            }
            else{
                min=arr[i];
            }
        }
        return max_profit;
    }
};
int main(){
    
    return 0;
}