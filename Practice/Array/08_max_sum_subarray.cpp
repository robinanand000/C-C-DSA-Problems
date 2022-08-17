#include <bits/stdc++.h>
#include <functional>
#include <algorithm>
using namespace std;

// } Driver Code Ends
class Solution
{
public:
    // arr: input array
    // n: size of array
    //Function to find the sum of contiguous subarray with maximum sum.
    bool all_negatives(int *arr, int n)
    {
        for (int i = 0; i < n; i++)
        {
            if (arr[i] > 0)
                return false;
        }
        return true;
    }
    int maximum(int *arr, int n)
    {
        int max = arr[0];
        for (int i = 1; i < n; i++)
        {
            if (arr[i] > max)
            {
                max = arr[i];
            }
        }
        return max;
    }
    int maxSubarraySum(int arr[], int n)
    {

        // Your code here

        int m = maximum(arr, n);
        if (all_negatives(arr, n) == true)
        {
            return m;
        }
        else
        {
            int max_sum = 0;
            int cur_sum = 0;

            for (int i = 0; i < n; i++)
            {
                cur_sum = cur_sum + arr[i];
                if (cur_sum > max_sum)
                {
                    max_sum = cur_sum;
                }

                if (cur_sum < 0)
                {
                    cur_sum = 0;
                }
            }
            return max_sum;
        }
    }
};

// { Driver Code Starts.

int main()
{
    int t, n;

    cin >> t;   //input testcases
    while (t--) //while testcases exist
    {

        cin >> n; //input size of array

        int a[n];

        for (int i = 0; i < n; i++)
            cin >> a[i]; //inputting elements of array

        Solution ob;

        cout << ob.maxSubarraySum(a, n) << endl;
    }
}
// } Driver Code Ends